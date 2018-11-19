#include <stdio.h>
#include "generationCode.h"

void mode(int choix)
{
    FILE* fichier = NULL;
    fichier = fopen("coeur.c/param.h", "w");

    fprintf(fichier, "const int CONFIG = %i", choix);

    fclose(fichier);
}
