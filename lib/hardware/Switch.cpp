#include "Switch.h"
#include<mbed.h>
#include<stdbool.h>

Switch::Switch(PinName p) : pin(p,1)
{
}

bool Switch::isPressed()
{
  return !(pin.read());
}
