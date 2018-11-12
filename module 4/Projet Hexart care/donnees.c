#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"

Valeurs* stocker(int *size, Valeurs *vlist)
{
    int i;
    FILE* fichier = NULL;
    fichier = fopen("battements.csv","r");
    if (fichier != NULL)
    {
        int temps, poul;
        printf("Temps\tPoul\n");
        while(fscanf(fichier, "%i ; %i",&temps, &poul)!=EOF)
        {
            Valeurs v;
            v.poul = poul;
            v.temps = temps;
            vlist[*size] = v;
            (*size)++;

        }
        fclose(fichier);
    }
    return vlist;

}


