#include "LedStatus.h"

LedStatus::LedStatus(byte redPin, byte greenPin, byte bluePin) {
  this->_redPin = redPin;
  this->_greenPin = greenPin;
  this->_bluePin = bluePin;
}

void LedStatus::blinkRed(unsigned long periodMilliseconds) {
  this->_blink(this->_redPin, periodMilliseconds);
}

void LedStatus::blinkGreen(unsigned long periodMilliseconds) {
  this->_blink(this->_greenPin, periodMilliseconds);
}

void LedStatus::blinkBlue(unsigned long periodMilliseconds) {
  this->_blink(this->_bluePin, periodMilliseconds);
}

void LedStatus::flashRed(unsigned long timeout) {
  this->_blink(this->_redPin, timeout);
}

void LedStatus::flashGreen(unsigned long timeout) {
  this->_blink(this->_greenPin, timeout);
}

void LedStatus::flashBlue(unsigned long timeout) {
  this->_blink(this->_bluePin, timeout);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PRIVATE FUNCTIONS

void LedStatus::_blink(byte pin, unsigned long preiodMilliseconds) {

}

void LedStatus::_flash(byte pin, unsigned long timeout) {

}
