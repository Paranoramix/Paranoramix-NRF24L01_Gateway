#include "LedStatus.h"

LedStatus::LedStatus(byte redPin, byte greenPin, byte bluePin) {
  this->_redPin = redPin;
  this->_greenPin = greenPin;
  this->_bluePin = bluePin;
}

void LedStatus::begin() {
    pinMode(this->_redPin, OUTPUT);
    pinMode(this->_greenPin, OUTPUT);
    pinMode(this->_bluePin, OUTPUT);
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


void LedStatus::offRed() {
  this->_off(this->_redPin);
}

void LedStatus::offGreen() {
  this->_off(this->_greenPin);
}

void LedStatus::offBlue() {
  this->_off(this->_bluePin);
}


void LedStatus::onRed() {
  this->_on(this->_redPin);
}

void LedStatus::onGreen() {
  this->_on(this->_greenPin);
}

void LedStatus::onBlue() {
  this->_on(this->_bluePin);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PRIVATE FUNCTIONS

void LedStatus::_blink(byte pin, unsigned long periodMilliseconds) {
  if (millis() - this->_startedMilliseconds >= periodMilliseconds) {
    this->_startedMilliseconds = millis();
    digitalWrite(pin, !digitalRead(pin));
  }
}

void LedStatus::_flash(byte pin, unsigned long timeout) {
  if (millis() - this->_startedMilliseconds <= timeout) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

void LedStatus::_on(byte pin) {
  digitalWrite(pin, HIGH);
}

void LedStatus::_off(byte pin) {
  digitalWrite(pin, LOW);
}
