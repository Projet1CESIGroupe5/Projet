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
        int temps, pouls;
        while(fscanf(fichier, "%i ; %i",&temps, &pouls)!=EOF)
        {
            Valeurs v;
            v.pouls = pouls;
            v.temps = temps;
            vlist[*size] = v;
            (*size)++;
        }
        fclose(fichier);
    }
    return vlist;

}

int recherhce_dicho(Valeurs* tab, int size, int val)
{
    int trouve;  //vaut faux tant que la valeur "val" n'aura pas �t� trouv�e
  int id;  //indice de d�but
  int ifin;  //indice de fin
  int im;  //indice de "milieu"

  /* initialisation de ces variables avant la boucle de recherche */
  trouve = 0;  //la valeur n'a pas encore �t� trouv�e
  id = 0;  //intervalle de recherche compris entre 0...
  ifin = size;  //...et nbVal

  /* boucle de recherche */
  while(!trouve && ((ifin - id) > 1)){

    im = (id + ifin)/2;  //on d�termine l'indice de milieu

    if(tab[im].temps == val)
    {
        trouve = 1;
    }
    else
    {
        trouve = 0;
    }//on regarde si la valeur recherch�e est � cet indice

    if(tab[im].temps > val) ifin = im;  //si la valeur qui est � la case "im" est sup�rieure � la valeur recherch�e, l'indice de fin "ifin" << devient >> l'indice de milieu, ainsi l'intervalle de recherche est restreint lors du prochain tour de boucle
    else id = im;  //sinon l'indice de d�but << devient >> l'indice de milieu et l'intervalle est de la m�me fa�on restreint
  }

  /* test conditionnant la valeur que la fonction va renvoyer */
  if(tab[id].temps == val) return(id);  //si on a trouv� la bonne valeur, on retourne l'indice
  else return(-1);  //sinon on retourne -1
}


