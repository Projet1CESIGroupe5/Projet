#include "param.h"
#include "coeur.h"
#define TEMPS 60

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
  if(CONFIG == 1)
  {
    Mode_Toutes();
  }
  else if(CONFIG == 2)
  {
    Mode_1_sur_2();
  }
  else if(CONFIG == 3)
  {
    Mode_1_sur_3();
  }
  else if(CONFIG == 4)
  {
    Mode_Echange();
  }
  else if(CONFIG == 5)
  {
    Mode_Chenille();
  }
  else if(CONFIG == 6)
  {
    Mode_Chenille_Inverse();
  }
  else if(CONFIG == 7)
  {
    Mode_Chenille_bis();
  }
  else if(CONFIG == 8)
  {
    Mode_Guirlande();
  }
}

void Mode_Toutes()
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
  delay(200);
}

void Mode_1_sur_2()
{
  for(int i = 2; i < 12; i+=2)
  {
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    delay(200);
  }
}

void Mode_1_sur_3()
{
  for(int i = 0; i < 12; i+=3)
  {
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    delay(200);
  }
}

void Mode_Echange()
{
  for(int i = 2; i < 12; i+=2)
  {
     digitalWrite(i, HIGH);
  }

  delay(200);

  for(int i = 2; i < 12; i+=2)
  {
     digitalWrite(i, LOW);
  }

  delay(200);

  for(int i = 3; i < 12; i+=2)
  {
     digitalWrite(i, HIGH);
  }

  delay(200);

  for(int i = 3; i < 12; i+=2)
  {
     digitalWrite(i, LOW);
  }

  delay(200);
}

void Mode_Chenille_Inverse()
{
  for(int i = 11; i >=2; i--)
  {
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    delay(200);
  }
}

void Mode_Chenille()
{
  for(int i = 0; i < 12; i++)
  {
  digitalWrite(i, HIGH);
  delay(200);
  digitalWrite(i, LOW);
  delay(200);
  }
}


void Mode_Chenille_bis()
{
  for(int i = 0; i < 12; i++)
  {
    digitalWrite(LEDS[i], LOW);
    delay(200);
    digitalWrite(LEDS[i], HIGH);
    delay(200);
  }
}

void Mode_Guirlande()
{
  digitalWrite(3, HIGH);
  delay(TEMPS);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(TEMPS);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(TEMPS);
  digitalWrite(6, HIGH);
  digitalWrite(10, HIGH);
  delay(TEMPS);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  delay(TEMPS);
  digitalWrite(8, HIGH);
  delay(TEMPS);
  digitalWrite(3, LOW);
  delay(TEMPS);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(TEMPS);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  delay(TEMPS);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  delay(TEMPS);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  delay(TEMPS);
  digitalWrite(8, LOW);
  delay(TEMPS);
}
