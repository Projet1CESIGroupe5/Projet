#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

//Definission des variables
    int c=0;
    int l=0;

void menu()
{
while(l==0)
	{
        printf("Veuillez choisir l'action a effectuer :\n");
        printf("1)Afficher les donnees dans l'ordre\n");
        printf("Afficher les donnees dans l ordre croissant\n\t2)Selon le temps\n\t3)Selon le pouls\n");
        printf("Afficher les donnees dans l ordre decroisant\n\t4)Selon le temps\n\t5)Selon le pouls\n");
        printf("6)Afficher les donnees pour un temps particulier\n7)Afficher le moyenne de pouls pour une plage de temps\n");
        printf("8)Afficher le nombre de ligne en memoire\n");
        printf("9)Afficher le max et min de pouls\n");
        printf("0)Quitter\n");
        scanf("%i",&c);

        if (c==1)
		{
             lecture();

		}
		else if(c==2)
		{

		}
		else if(c==3)
		{
			printf("croissant pouls\n");
		}
		else if(c==4)
		{
			printf("decroissant temps\n");
		}
		else if(c==5)
		{
			printf("decroissant pouls\n");
		}
		else if(c==6)
		{
			printf("temps particulier\n");
		}
		else if(c==7)
		{
			printf("moyenne\n");
		}
		else if(c==8)
		{
			printf("nb de ligne\n");
		}
		else if(c==9)
		{
			printf("max et min\n");
		}
			printf("Voulez-vous refaire une action ?\n1)Oui\n0)Non\n");
			scanf("%i",&c);

		if(c==0)
		{
			l=1;
		}
	}
}


