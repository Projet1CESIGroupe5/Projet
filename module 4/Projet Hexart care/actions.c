#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "donnees.h"
#include "actions.h"

void afficher_ordre()
{
    int i = 0;
    Valeurs vlist[10000];
    stocker(&i, vlist);
    afficher(vlist, i);
}
void tri_croissant_temps(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].temps > var.temps; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void tri_croissant_pouls(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].pouls > var.pouls; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }

}
void tri_decroissant_temps(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].temps < var.temps; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void tri_decroissant_pouls(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].pouls < var.pouls; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void afficher(Valeurs* vlist, int size)
{
    printf("Temps\tPouls\n");
    for(int i = 0; i < size; i++)
    {
        printf("%i\t%i\n", vlist[i].temps, vlist[i].pouls);
    }
}

void nb_valeurs(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    printf("Nombre de valeurs = %i\n",*size);

}
void instant_t(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int temps;
    printf("Pour quelle insant t voulez-vous le pouls?\n");
    scanf("%i",&temps);
    tri_croissant_temps(vlist, size);
    int index = recherche_dicho(vlist, *size, temps);
    printf("A l'instant t=%i, le pouls est de %i\n", vlist[index].temps, vlist[index].pouls);

}
void valeurs_min_max(Valeurs *vlist, int *size)
{
    stocker(size, vlist);

    tri_croissant_pouls(vlist, size);
    printf("Le pouls minimum est :\n");
    printf("%i\t\n", vlist[0].pouls);

    tri_decroissant_pouls(vlist, size);
    printf("Le pouls maximum est :\n");
    printf("%i\t\n", vlist[0].pouls);
}

int recherche_dicho(Valeurs *tab, int size, int val)
{
  bool trouve;
  int id;
  int ifin;
  int im;

  /* initialisation de ces variables avant la boucle de recherche */
  trouve = false;
  id = 0;
  ifin = size;

  /* boucle de recherche */
  while(!trouve && ((ifin - id) > 1)){

    im = (id + ifin)/2;

    trouve = (tab[im].temps == val);

    if(tab[im].temps > val) ifin = im;
    else id = im;
  }

  /* test conditionnant la valeur que la fonction va renvoyer */
  if(tab[id].temps == val) return(id);
  else return(-1);
}
void moyenne(Valeurs *vlist, int *size)
{
    instant_t(vlist, size);
    instant_t(vlist, size);

}
