#include "cardio.c"

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(0);

  float tension = val * (5.0/1023.0);
  
  heartbeat(tension);
  
}
