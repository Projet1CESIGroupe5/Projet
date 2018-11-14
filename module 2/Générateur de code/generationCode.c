#include <stdio.h>
#include "generationCode.h"

void Mode_1()
{
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w");

    if(fichier != NULL)
    {
    fprintf("for(int i = 2; i < 12; i++)"
            " { digitalWrite(i, HIGH); }"
            " delay(200); "
            " for(int i = 2; i < 12; i++)"
            " { digitalWrite(i, LOW); }"
            " delay(200);", fichier);
    }
    fclose(fichier);
}

void Mode_2()
{
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w");

    if(fichier != NULL)
    {
        fprintf(" for(int i = 2; i < 12; i+=2)"
                " { digitalWrite(i, HIGH); "
                " delay(200); "
                " digitalWrite(i, LOW); "
                " delay(200); }", fichier);
    }
    fclose(fichier);
}

void Mode_3()
{
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w");

    if(fichier != NULL)
    {
       fprintf(" for(int i = 0; i < 12; i+=3)"
                " { digitalWrite(i, HIGH); "
                " delay(200); "
                " digitalWrite(i, LOW); "
                " delay(200); }", fichier);
    }
    fclose(fichier);
}
/*void mode_de_leds(int choix)
{
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w");

    fprintf(fichier, "const int CONFIG = %i", choix);

    switch(choix)
    {
    case 1 :
        fprintf("for(int i = 2; i < 12; i++)"
            " { digitalWrite(i, HIGH); }"
            " delay(200); "
            " for(int i = 2; i < 12; i++) "
            " { digitalWrite(i, LOW); }"
            " delay(200);", fichier);
    break;

    case 2 :
        fprintf(" for(int i = 2; i < 12; i+=2)"
            " { digitalWrite(i, HIGH); "
            " delay(200); "
            " digitalWrite(i, LOW); "
            " delay(200); }", choix, fichier);
    break;

    case 3 :
        fprintf(" for(int i = 0; i < 12; i+=3)"
            " { digitalWrite(i, HIGH); "
            " delay(200); "
            " digitalWrite(i, LOW); "
            " delay(200); }", choix, fichier);
    break;

    case 4 :
        fprintf(" for(int i = 2; i < 12; i+=2)"
            " { digitalWrite(i, HIGH); } "
            " delay(200); "
            " for(int i = 2; i < 12; i+=2)"
            " { digitalWrite(i, LOW); } "
            " delay(200); "
            " for(int i = 3; i < 12; i+=2)"
            " { digitalWrite(i, HIGH); } "
            " delay(200); "
            " for(int i = 3; i < 12; i+=2)"
            " { digitalWrite(i, LOW); } "
            " delay(200);", choix, fichier);
    break;

    case 5 :
        fprintf("for(int i = 11; i >=2; i--)"
            " { digitalWrite(i, HIGH); "
            " delay(200); "
            " digitalWrite(i, LOW); "
            " delay(200); }", choix, fichier);
    break;

    case 6 :
        fprintf(" for(int i = 0; i < 12; i++)"
            " { digitalWrite(i, HIGH); "
            " delay(200); "
            " digitalWrite(i, LOW); "
            " delay(200); }", choix, fichier);
    break;

    case 7 :
        fprintf(" for(int i = 0; i < 12; i++)"
            " { digitalWrite(LEDS[i], LOW); "
            " delay(200); "
            " digitalWrite(LEDS[i], HIGH); "
            " delay(200); }", choix, fichier);
    break;

    case 8 :
        fprintf(" digitalWrite(3, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(2, HIGH); "
            " digitalWrite(4, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(5, HIGH); "
            " digitalWrite(11, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(6, HIGH); "
            " digitalWrite(10, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(7, HIGH); "
            " digitalWrite(9, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(8, HIGH); "
            " delay(TEMPS); "
            " digitalWrite(3, LOW); "
            " delay(TEMPS); "
            " digitalWrite(2, LOW); "
            " digitalWrite(4, LOW); "
            " delay(TEMPS); "
            " digitalWrite(5, LOW); "
            " digitalWrite(11, LOW); "
            " delay(TEMPS); "
            " digitalWrite(6, LOW); "
            " digitalWrite(10, LOW); "
            " delay(TEMPS); "
            " digitalWrite(7, LOW); "
            " digitalWrite(9, LOW); "
            " delay(TEMPS); "
            " digitalWrite(8, LOW); "
            " delay(TEMPS);", choix, fichier);
    break;
    }

    fclose(fichier);
}*/

