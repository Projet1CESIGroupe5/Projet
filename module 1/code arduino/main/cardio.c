#include "cardio.h"
#include <Arduino.h>
#include <stdio.h>

extern int main_bpm;

void init_vars()
{
  lastBPM = 0;
  lastTime = 0;
  up = false;
  total_bpm = 0;
  amount_bpm = 0;
}


void heartbeat_detection(float tension) 
{
  //float tension = 1.0;
    if(tension > 1 && up == 0)
      {
        if(lastTime == 0)
        {
          lastTime = millis();
        }
        else
        {
          float bpm = calculate_bpm();
          if(bpm > 60 && bpm < 200)
          {
            total_bpm += bpm;
            amount_bpm += 1;
            light();
          }
        }
        lastTime = millis();
        up = 1;
      }
      if(tension < 1)
      {
        up = 0;
      }
      if(amount_bpm == 5)
      {
        total_bpm = 0.0;
        amount_bpm = 0;
      }
}

float calculate_bpm() 
{
  long DiffTemps = millis()-lastTime;
  float bpm = 60.0*(DiffTemps/1000.0)*2.0;
  return bpm; 
}

void light()
{
  for(int i = 2; i < 12; i++)
  {
   digitalWrite(i, HIGH); 
  }
  delay(200);
  for(int i = 2; i < 12; i++)
  {
   digitalWrite(i, LOW); 
  }
}
