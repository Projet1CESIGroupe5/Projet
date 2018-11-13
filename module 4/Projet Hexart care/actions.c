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
void tri_croissant()
{
    int i,j;
    Valeurs vlist[100];
    stocker(&i, vlist);
    for (int k=1;k<i;k++)
    {
        Valeurs elem=vlist[k];
        for(j=i;j>0 && vlist[j-1].temps>elem.temps;j--)
            vlist[j]=vlist[j-1];
        vlist[j]=elem;
    }

}
