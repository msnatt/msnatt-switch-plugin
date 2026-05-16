#ifndef SWITCH_H
#define SWITCH_H

#include <Arduino.h>

class SWITCH {

public:

  SWITCH();

  void begin(int pin);

  void set(bool state);

private:

  int _pin;
};

#endif