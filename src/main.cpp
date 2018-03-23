#include <mbed.h>
#include <stdbool.h>
#include "components.h"

int main()
{
  AssignmentBoard board;

  bool flashing = false;

  LED redLED(board.K64F_RED_LED);
  Switch btn(board.K64F_SW2, true);

  while(1)
  {
    if(!(btn.isPressed()))
    {
      flashing = true;
    }
    else
    {
      flashing = false;
    }

    printf("button %d\n", btn.isPressed());

    if(flashing)
    {
      redLED.on();
      wait(0.5);
      redLED.off();
      wait(0.5);
    }
    else
    {
      redLED.off();
      wait(1);
    }
  }
}
