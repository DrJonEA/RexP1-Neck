/*
 * LEDBarAgent.h
 *
 *  Created on: 23 Jun 2025
 *      Author: jondurrant
 */

#ifndef FIRMWARE_NECK_SRC_LEDBARAGENT_H_
#define FIRMWARE_NECK_SRC_LEDBARAGENT_H_

#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "task.h"

#include "Agent.h"

#include "PicoLed.hpp"
#include "AstroDroidConfig.h"

#define LED_BAR_LEN 12

class LEDBarAgent : public Agent {
public:
	LEDBarAgent();
	virtual ~LEDBarAgent();



	void kitt(int ms, PicoLed::Color color);

	void rainbow(int ms);


protected:

	/***
	 * Run loop for the agent.
	 */
	virtual void run();


	/***
	 * Get the static depth required in words
	 * @return - words
	 */
	virtual configSTACK_DEPTH_TYPE getMaxStackSize();

private:

	PicoLed::PicoLedController xNeopixels = PicoLed::addLeds<PicoLed::WS2812B>(
					pio1, 0,
					GP_WS2812B,
					LED_BAR_LEN,
					PicoLed::FORMAT_GRB);

	int xStep;



};

#endif /* FIRMWARE_NECK_SRC_LEDBARAGENT_H_ */
