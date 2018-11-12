#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"

void afficher_ordre()
{
    int i = 0;
    Valeurs vlist[100];
    stocker(&i, vlist);
    int k;
        for (k=0;k<i;k++)
    {
        printf("%i\t%i\n", vlist[k].temps, vlist[k].poul);
    }
}
void tri_croissant(Valeurs tab[], int taille)
{
    int i,j;
    Valeurs vlist[100];
    stocker(&i, vlist);
    for (i=1;i<taille;i++)
    {
        Valeurs elem=tab[i];
        for(j=i;j>0 && tab[j-1].temps>elem.temps;j--)
            tab[j]=tab[j-1];
        tab[j]=elem;
    }

}
