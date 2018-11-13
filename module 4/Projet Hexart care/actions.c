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

void nb_valeurs()
{
    Valeurs vlist[100];
    int size = 0;
    stocker(&size, vlist);
    printf("Nombre de valeurs = %i\n",size);

}
void instant_t()
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


}
void valeurs_min_max()
{
    Valeurs vlist[100];
    int size = 0;
    stocker(&size, vlist);
    int i, j;
    for(i = 1; i < size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].pouls > var.pouls; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
    printf("Le pouls minimum est :\n");
    printf("%i\t\n", vlist[0].pouls);

    for(i = 1; i < size; i++)
    {
        Valeurs var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].pouls < var.pouls; j--)
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
    printf("Le pouls maximum est :\n");
    printf("%i\t\n", vlist[0].pouls);

}

int recherche_dicho(Valeurs *tab, int size, int val)
{
      bool trouve;  //vaut faux tant que la valeur "val" n'aura pas été trouvée
  int id;  //indice de début
  int ifin;  //indice de fin
  int im;  //indice de "milieu"
  
  /* initialisation de ces variables avant la boucle de recherche */
  trouve = false;  //la valeur n'a pas encore été trouvée
  id = 0;  //intervalle de recherche compris entre 0...
  ifin = size;  //...et nbVal
  
  /* boucle de recherche */
  while(!trouve && ((ifin - id) > 1)){

    im = (id + ifin)/2;  //on détermine l'indice de milieu
    
    trouve = (tab[im].temps == val);  //on regarde si la valeur recherchée est à cet indice
    
    if(tab[im].temps > val) ifin = im;  //si la valeur qui est à la case "im" est supérieure à la valeur recherchée, l'indice de fin "ifin" << devient >> l'indice de milieu, ainsi l'intervalle de recherche est restreint lors du prochain tour de boucle
    else id = im;  //sinon l'indice de début << devient >> l'indice de milieu et l'intervalle est de la même façon restreint
  }
  
  /* test conditionnant la valeur que la fonction va renvoyer */
  if(tab[id].temps == val) return(id);  //si on a trouvé la bonne valeur, on retourne l'indice
  else return(-1);  //sinon on retourne -1
}
