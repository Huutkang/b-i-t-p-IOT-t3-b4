#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led(LED_PIN, LED_ACT);

void btnPush();
void btnDoubleClick();
OneButton button(BTN_PIN, !BTN_ACT);

void setup()
{
    led.off();
    button.attachClick(btnPush);            // Single click for ON/OFF
    button.attachDoubleClick(btnDoubleClick); // Double click for blinking
}

void loop()
{
    led.loop();
    button.tick();
}

void btnPush()
{
    led.flip(); // Toggle LED ON/OFF
}

void btnDoubleClick()
{
    led.blink(200); // Set LED to blink mode
}
