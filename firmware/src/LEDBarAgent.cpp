/*
 * LEDBarAgent.cpp
 *
 *  Created on: 23 Jun 2025
 *      Author: jondurrant
 */

#include "LEDBarAgent.h"
#include "ColorUtils.h"

#define FLAG_LEN 6
LEDBarAgent::LEDBarAgent() {
	// TODO Auto-generated constructor stub

}

LEDBarAgent::~LEDBarAgent() {
	stop();
}

/***
 * Main Run Task for agent
 */
void LEDBarAgent::run(){

	PicoLed::Color flag[FLAG_LEN];

	flag[0] = PicoLed::RGB(228, 3, 3);
	flag[1] = PicoLed::RGB (255, 140, 0);
	flag[2] = PicoLed::RGB(255, 237, 0);
	flag[3] = PicoLed::RGB(0, 128, 38);
	flag[4] = PicoLed::RGB(0, 0, 255);
	flag[5] = PicoLed::RGB(127, 0, 255);

	printf("Led BAR Started\n");
	xNeopixels.setBrightness( 50);
	xNeopixels.fill( flag[5] );
	xNeopixels.show();
	vTaskDelay(3000);

	for(;;){
		for (int f =0; f < FLAG_LEN; f++){
			kitt(10000, flag[f]);
			rainbow(10000);
			//vTaskDelay(3000);
		}
	}
}

/***
* Get the static depth required in words
* @return - words
*/
configSTACK_DEPTH_TYPE LEDBarAgent::getMaxStackSize(){
	return 250;
}

void LEDBarAgent::kitt(int ms, PicoLed::Color color){
	int pos = LED_BAR_LEN /2;
	bool dir = true;

	uint32_t now = to_ms_since_boot( get_absolute_time ());
	uint32_t end = now + ms;

	while (now < end){
		xNeopixels.clear();
		xNeopixels.setPixelColor(pos,  color);
		xNeopixels.show();
		if (dir){
			pos ++;
		} else {
			pos --;
		}
		if (pos >= LED_BAR_LEN){
			pos - LED_BAR_LEN -1;
			dir = !dir;
		}
		if (pos < 0){
			pos = 0;
			dir = !dir;
		}

		vTaskDelay(100);
		now = to_ms_since_boot( get_absolute_time ());

	}
}

void LEDBarAgent::rainbow(int ms){
	xNeopixels.clear();

	float delta = 1.0 / (float) LED_BAR_LEN;
	float v;
	uint8_t r, g, b;
	for (int i=0; i < LED_BAR_LEN; i++){
		ColorUtils::valToRGB(v , r, g, b);
		xNeopixels.setPixelColor(i,  PicoLed::RGB(r, g, b));
		v = v + delta;
	}
	xNeopixels.show();
	vTaskDelay(ms);
}


