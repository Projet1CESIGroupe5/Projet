int max = 0;
long lastTime = 0;
int montant = 0;
int battement = 0;
int battements = 0;
float bpms = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int r = analogRead(0);

  float f = r * (5.0/1023.0);

  if(f > 1 && battement == 0)
  {
    if(lastTime == 0)
    {
      lastTime = millis();
    }
    else
    {
      long diff = millis()-lastTime;
      float bpm = 60.0*(diff/1000.0)*2.0;
      if(bpm > 60 && bpm < 100)
      {
        bpms += bpm;
        battements += 1;
        Serial.print("bpm: ");
        Serial.println(bpm);
      }
    }
    lastTime = millis();
    battement = 1;
  }
  if(f < 1)
  {
    battement = 0;
  }
  if(battements == 5)
  {
    Serial.print("moyenne: ");
    Serial.println(bpms/5.0);
    bpms = 0.0;
    battements = 0;
  }
}
