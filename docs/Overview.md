# Project Overview: 
REXP1 is reimagined, modular Star Wars-inspired droid that blends mechanical engineering, electronics, and thematic flair. Designed for both mobility and character, it features a dual-mode rotating body that shifts between relaxed drive possition and alert postures, driven by bus servos and integrated with interactive LED lighting for expressive behavior.

# Key Technical Highlights:

## Dome Rotation: 
Powered by a modified 28BYJ-48 stepper motor configured for two-phase operation and driven via a DRV8825 motor driver. A Hall sensor (A1104) is used for zero-point calibration, ensuring precise rotation positioning.

## Body Tilt Mechanism: 
Built around bus servos with direct UART communication through an RP2040, complemented by a braced gear drive for torque management. Initial gear designs were iterated to improve stability under growing load.

## Microcontroller & Control Firmware: 
The RP2040Zero microcontroller hosts firmware which orchestrates movement via Micro ROS integration. Stepper and servo controls are abstracted into modular classes like Stepper, JointAgent, and LX16A, enabling joint state publishing and jog-based movement control.

## Visual Effects & Expression: 
Equipped with WS2812B (NeoPixel) LED bars managed via a custom LED Bar Agent. Patterns include rainbow sequences and a Knight Rider–inspired "KITT" sweep, with pride-themed color support to reflect community values and demonstration context.

## Expandable Connectivity: 
The PCB (fabricated by PCBWay) includes multiple servo outputs (PWM and UART) and support for additional peripherals, allowing future upgrades like tool arms and sensory modules.

## Creative & Thematic Elements: 
The build fuses classic sci-fi aesthetics with modern electronics, aiming to evolve REX-P1 into a more expressive and interactive robotic character. Jon’s storytelling adds depth, portraying the development journey with humor and candid insights into design challenges.
