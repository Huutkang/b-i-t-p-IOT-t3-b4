# ESP32 LED Control with Button

This project demonstrates how to control an LED using a button connected to an ESP32 with the help of the OneButton library. The button has two main functionalities:
- **Single Click**: Toggle the LED on/off.
- **Double Click**: Switch the LED to blinking mode.

## Components
- ESP32 (Super Mini)
- LED
- Push button

## Functionality
1. **Single Click**: The LED is turned on or off each time the button is pressed once.
2. **Double Click**: The LED starts blinking, toggling its state every 200 milliseconds.
3. **Continuous LED Management**: The `led.loop()` method is called in `loop()` to handle the blinking logic.

## Setup Instructions
1. Connect the LED to the designated pin (defined as `LED_PIN` in the code).
2. Connect the button to the designated pin (`BTN_PIN`).
3. Load the code onto the ESP32.
4. Press the button for the corresponding actions.

## Code Explanation
- The **OneButton library** is used to detect single and double clicks from the button.
- The **LED class** handles the LED's state (on, off, blink).
- In `setup()`, the button click events are linked to functions (`btnPush()` for single click, `btnDoubleClick()` for double click).
- In `loop()`, the button state is checked with `button.tick()` and the LED state is updated with `led.loop()`.

### Changes from Original Project
- Replaced long press functionality with double click to switch the LED to blinking mode.
- Retained the single-click behavior for toggling the LED on/off.
