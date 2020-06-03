#include <Arduino.h>

#ifndef _LED_STATUS_H
#define _LED_STATUS_H

class LedStatus {
private:
  byte _redPin;
  byte _greenPin;
  byte _bluePin;

  void _blink(byte, unsigned long);
  void _flash(byte, unsigned long);

public:
  LedStatus(byte, byte, byte);

  void blinkRed(unsigned long);
  void blinkGreen(unsigned long);
  void blinkBlue(unsigned long);

  void flashRed(unsigned long);
  void flashGreen(unsigned long);
  void flashBlue(unsigned long);
};

#endif
