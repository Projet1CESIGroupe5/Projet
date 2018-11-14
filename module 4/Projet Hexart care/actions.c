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
    printf("                                             .----------------.\n");
    printf("                                             |Temps\tPouls |\n");
    for(int i = 0; i < size; i++)
    {
        printf("                                             | %i\t%i    |\n", vlist[i].temps, vlist[i].pouls);
    }
    printf("                                             '----------------'\n");
}

void nb_valeurs(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    printf("                                 .-----------------------------.\n");
    printf("                                 |   Nombre de valeurs = %i |\n",*size);
    printf("                                 '-----------------------------'\n");

}
void instant_t(Valeurs *vlist, int *size)
{
    stocker(size, vlist);
    int temps;
    printf("                      .-----------------------------------------------.\n");
    printf("                      |   Pour quel instant t voulez-vous le pouls ? |\n");
    printf("                      '-----------------------------------------------'\n");
    scanf("%i",&temps);
    tri_croissant_temps(vlist, size);
    int index = recherche_dicho(vlist, *size, temps);
    int a = vlist[index].pouls;
    int b = vlist[index].temps;
    if (a<100)
    {
        if(b<10)
        {
            printf("                      .----------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '----------------------------------------'\n");
        }
        else if(b<100)
        {
            printf("                      .-----------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '-----------------------------------------'\n");
        }
        else if(b<1000)
        {
            printf("                      .------------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '------------------------------------------'\n");
        }
        else if(b<=10000)
        {
            printf("                      .--------------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i   |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '--------------------------------------------'\n");
        }
    }

    else
    {
        if(b<10)
        {
            printf("                      .-----------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '-----------------------------------------'\n");
        }
        else if(b<100)
        {
            printf("                      .------------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '------------------------------------------'\n");
        }
        else if(b<1000)
        {
            printf("                      .-------------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '-------------------------------------------'\n");
        }
        else if(b<=10000)
        {
            printf("                      .--------------------------------------------.\n");
            printf("                      |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].temps, vlist[index].pouls);
            printf("                      '--------------------------------------------'\n");
        }
    }


}
void valeurs_min_max(Valeurs *vlist, int *size)
{
    stocker(size, vlist);

    tri_croissant_pouls(vlist, size);
    printf("                                  .---------------------------.\n");
    printf("                                  |Le pouls minimum est : %i  |\n", vlist[0].pouls);

    tri_decroissant_pouls(vlist, size);
    printf("                                  |Le pouls maximum est : %i |\n", vlist[0].pouls);
    printf("                                  '---------------------------'\n");
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
int moyenne()
{
    Valeurs vlist[20000];
    int size = 0;
    int t1, t2;
    printf("                        .----------------------------------------------.\n");
    printf("                        |   Indiquer le debut de la plage de donnees   |\n");
    printf("                        '----------------------------------------------'\n");
    scanf("%i", &t1);
    printf("                        .----------------------------------------------.\n");
    printf("                        |   Indiquer la fin de la plage de donnees     |\n");
    printf("                        '----------------------------------------------'\n");
    scanf("%i", &t2);

    tri_croissant_temps(vlist, &size);

    int index1 = recherche_dicho(vlist, size, t1);
    int index2 = recherche_dicho(vlist, size, t2);

    int pouls = 0;
    for(int i = index1; i <= index2; i++)
    {
        //printf("A l'instant t=%i, le pouls est de %i\n", vlist[i].temps, vlist[i].pouls);
        pouls += vlist[i].pouls;
    }
    int moy = pouls/(index2-index1+1);
    printf("                        .---------------------------------------------------.\n");
    printf("                        |   Pour une plage de donnees allant de %i a %i \n",t1,t2);
    printf("                        |   La moyenne des pouls est de : %i                |\n",moy);
    printf("                        '---------------------------------------------------'\n");
}
