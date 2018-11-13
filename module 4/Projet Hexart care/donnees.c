#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"

void stocker(int *size, Valeurs *vlist)
{
    int i;
    FILE* fichier = NULL;
    fichier = fopen("battements.csv","r");
    if (fichier != NULL)
    {
        int temps, pouls;
        while(fscanf(fichier, "%i ; %i",&temps, &pouls)!=EOF)
        {
            Valeurs v = {0};
            v.pouls = pouls;
            v.temps = temps;
            vlist[*size] = v;
            (*size)++;
        }
        fclose(fichier);
    }

}




