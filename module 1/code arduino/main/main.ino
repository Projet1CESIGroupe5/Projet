#include "cardio.h"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(0);

  float tension = val * (5.0/1023.0);

  heartbeat_detection(tension);

  Serial.println(moy);
  
}
