#include <Arduino.h>


#include "LedStatus.h"

LedStatus* led = new LedStatus(0, 2, 15);

byte i = 0;
void setup() {
  // put your setup code here, to run once:
  led->begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  led->offRed();
  led->offGreen();
  led->offBlue();

  switch(i) {
    case 0:
    led->onRed();
    break;
    case 1:
    led->onGreen();
    break;
    case 2:
    led->onBlue();
    break;
  }

  i++;
  if (i == 3) {
    i = 0;
  }

  delay(5000);
}
