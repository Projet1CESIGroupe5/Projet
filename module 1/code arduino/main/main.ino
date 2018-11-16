#include "cardio.c"

int main_bpm = 0;

void setup()
{
  Serial.begin(9600);
  for(int i = 2; i < 12; i++)
  {
    pinMode(i, OUTPUT);
  }
  init();
}

void loop()
{
  int val = analogRead(0);

  float tension = val * (5.0/1023.0);
  
  heartbeat_detection(tension);

  
  
}
