//libraries implementation
#include <stdio.h>
#include "generationCode.h"


void mode_de_leds(int choix)
{
    FILE* fichier = NULL;
    fichier = fopen("coeur.c/param.h", "w");

    fprintf(fichier, "const int CONFIG = %i", choix);

    fclose(fichier);
}

