#ifndef SWITCH_H
#define SWITCH_H

#include<mbed.h>
#include<stdbool.h>

class Switch
{
  private:
    DigitalIn pin;
    bool usesPullUpResistor;

  public:
    Switch(PinName pinName, bool usesPullUpResistor);
    bool isPressed();

};

#endif //SWITCH_H
