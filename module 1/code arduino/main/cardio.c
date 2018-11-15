#include "cardio.h"

int max = 0;
long lastTime = 0;
int montant = 0;
int battement = 0;
int battements = 0;
float bpms = 0;
int moy = 0;

void heartbeat_detection(float tension) {
if(tension > 1 && battement == 0)
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
        battements += 1;
        moy = bpm;
      }
    }
    lastTime = millis();
    battement = 1;
  }
  if(tension < 1)
  {
    battement = 0;
  }
  if(battements == 5)
  {
    bpms = 0.0;
    battements = 0;
  }
}
