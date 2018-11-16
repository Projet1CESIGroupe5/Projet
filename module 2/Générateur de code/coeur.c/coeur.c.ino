#include "param.h"
#include "coeur.h"

const int LEDS[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup()
{
  for(int i=0; i<10; i++)
  {
    pinMode(LEDS[i], OUTPUT);
  }
  
}

void loop()
{
    function();
}
