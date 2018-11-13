#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"

//Definission des variables
    int c=0;
    int l=0;

void menu()
{
while(l==0)
	{
	    printf("                                   .=====================.\n");
	    printf("                                   |CARDIO FREQUENCEMETRE|\n");
	    printf("                                   '====================='\n");
	    printf("            .=====================================================================.\n");
        printf("            |\tVeuillez choisir l'action a effectuer :                           |\n");
        printf("            |\t\t1)Afficher les donnees dans l'ordre du fichier            |\n");
        printf("            |\t\t2)Afficher les donnees dans l ordre croissant             |\n");
        printf("            |\t\t3)Afficher les donnees dans l ordre decroisant            |\n");
        printf("            |\t\t4)Afficher les donnees pour un temps particulier          |\n");
        printf("            |\t\t5)Afficher le moyenne de pouls pour une plage de temps    |\n");
        printf("            |\t\t6)Afficher le nombre de ligne en memoire                  |\n");
        printf("            |\t\t7)Afficher le max et min de pouls                         |\n");
        printf("            |\t\t0)Quitter                                                 |\n");
	    printf("            '====================================================================='\n");

        scanf("%i",&c);

        Valeurs vlist[20000];
        int size = 0;

        if (c==1)
		{
             afficher_ordre();

		}
		else if(c==2)
		{
            printf("1)Selon le temps\n");
            printf("2)Selon le pouls\n");
            scanf("%i",&c);
            if (c==1)
            {
                tri_croissant_temps(vlist, &size);
                afficher(vlist, size);
            }
            else if(c==2)
            {
                tri_croissant_pouls(vlist, &size);
                afficher(vlist, size);
            }
		}
		else if(c==3)
		{
            printf("1)Selon le temps\n");
            printf("2)Selon le pouls\n");
            scanf("%i",&c);
            if (c==1)
            {
                tri_decroissant_temps(vlist, &size);
                afficher(vlist, size);
            }
            else if(c==2)
            {
                tri_decroissant_pouls(vlist, &size);
                afficher(vlist, size);
            }
		}
		else if(c==4)
		{
            instant_t(vlist, &size);
		}
		else if(c==5)
		{
            moyenne(vlist, &size);
		}
		else if(c==6)
		{
			nb_valeurs(vlist, &size);
		}
		else if(c==7)
		{
            valeurs_min_max(vlist, &size);
		}
			printf("Voulez-vous refaire une action ?\n1)Oui\n0)Non\n");
			scanf("%i",&c);
		if(c==0)
		{
			l=1;
		}
	}
}


