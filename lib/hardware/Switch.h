#ifndef SWITCH_H
#define SWITCH_H

#include<mbed.h>
#include<stdbool.h>

class Switch
{
  private:
    DigitalOut pin;

  public:
    Switch(PinName p);
    bool isPressed();

};

#endif //SWITCH_H
