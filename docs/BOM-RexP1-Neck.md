# Bill of Materials

This is a BOM for the controller PCB. Headerpins will also be needed for some of the connectors.


|Reference |Footprint	 |	Qty	| Link | Notes
|----------|----------|----|--------|-------|
|A1|Pololu_Breakout_DRV8825| 1|https://amzn.to/3GIwLjC||
|BS1,BS2|JST_XH_B3B-XH-AM_1x03_P2.50mm_Vertical|2| | For HiWonder LX16A|
|C1|0.1uF C_Disc_D4.7mm_W2.5mm_P5.00mm|1|||
|C2,C3|1000uF CP_Radial_D8.0mm_P5.00mm|2|||
|D2|1N4148|1|https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdff|||
|J1|Stepper JST_XH_B4B-XH-AM_1x04_P2.50mm_Vertical|1|||
|J2|uart0 PinHeader_1x03_P2.54mm_Vertical,"1"|||
|J3|GND to GNDA PinHeader_1x02_P2.54mm_Vertical|1||Allows jumper to connect grounds|
|J4|Hall Sensor PinHeader_1x03_P2.54mm_Vertical|1|||
|J5,SV1,SV2,SV3,SV4,SV5| PinHeader_1x03_P2.54mm_Vertical|6||Used for Servos|
|J6| WS2812B-1 Conn_01x04_Pin|2|||
|P2|12V SCREWTERMINAL-5MM-2|1|||
|P3|6V|SCREWTERMINAL-5MM-2|1|||
|R1|RResistor_THT|1|||
|R2|220R|Resistor_THT|1|||
|R3|10K|Resistor_THT|1|||
|RZ1|RP2040-Zero|RP2040-Zero||1||
|SW1|SW_SPST |1|SW_PUSH_6mm||
|U1|LvlShift2Bi||1|| 2 channel level shifter|
|U2|A1104xLH|1|HAll Sensor||

