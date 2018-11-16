#include "cardio.h"
#include <Arduino.h>

void heartbeat_detection(float tension) {
  //float tension = 1.0;
    if(tension > 1 && montant == 0)
      {
        if(lastTime == 0)
        {
          lastTime = millis();
        }
        else
        {
          long DiffTemps = millis()-lastTime;
          float bpm = 60.0*(DiffTemps/1000.0)*2.0;
          if(bpm > 60 && bpm < 200)
          {
            bpms += bpm;
            bts += 1;
          }
        }
        lastTime = millis();
        montant = 1;
      }
      if(tension < 1)
      {
        montant = 0;
      }
      if(bts == 5)
      {
        bpms = 0.0;
        bts = 0;
      }
}
