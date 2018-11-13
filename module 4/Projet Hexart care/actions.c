#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"

void afficher_ordre()
{
    int i = 0;
    Valeurs vlist[100];
    stocker(&i, vlist);
    afficher(vlist, i);
}
void tri_croissant_temps()
{
    Valeurs vlist[100];
    int size = 0;
    stocker(&size, vlist);
    int i, j;
    for(i = 1; i < size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].temps > var.temps; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
    afficher(vlist, size);
}

void tri_decroissant_temps()
{
    Valeurs vlist[100];
    int size = 0;
    stocker(&size, vlist);
    int i, j;
    for(i = 1; i < size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].temps < var.temps; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
    afficher(vlist, size);
}

void afficher(Valeurs* vlist, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%i\t%i\n", vlist[i].temps, vlist[i].poul);
    }
}
