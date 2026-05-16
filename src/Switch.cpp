#include "Switch.h"

SWITCH::SWITCH() {
}

void SWITCH::begin(int pin) {

  _pin = pin;

  pinMode(_pin, OUTPUT);
}

void SWITCH::set(bool state) {

  digitalWrite(_pin, state);
}