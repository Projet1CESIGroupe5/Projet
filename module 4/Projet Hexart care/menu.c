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
	    printf("                                                    .---------------------.\n");
	    printf("                                                    |CARDIO FREQUENCEMETRE|\n");
	    printf("                                                    '---------------------'\n");
	    printf("                            .---------------------------------------------------------------------.\n");
        printf("                            |\tVeuillez choisir l'action a effectuer :                           |\n");
        printf("                            |\t\t1)Afficher les donnees dans l'ordre du fichier            |\n");
        printf("                            |\t\t2)Trier le fichier                                        |\n");
        printf("                            |\t\t3)Afficher les donnees pour un temps particulier          |\n");
        printf("                            |\t\t4)Calculer le moyenne de pouls pour une plage de temps    |\n");
        printf("                            |\t\t5)Calculer la moyenne du pouls de tout le fichier         |\n");
        printf("                            |\t\t6)Afficher le nombre de ligne en memoire                  |\n");
        printf("                            |\t\t7)Afficher le max et min de pouls                         |\n");
        printf("                            |\t\t8)Enregistrer un tri dans un fichier                      |\n");
        printf("                            |\t\t0)Quitter                                                 |\n");
	    printf("                            '---------------------------------------------------------------------'\n\n");
        printf("'----------------------------------------------------------------------------------------------------------------------'");

        scanf("%i",&c);

        Valeurs vlist[20000];
        int size = 0;

        if (c==1)
		{
             afficher_ordre();

		}
		else if(c==2)
        {
            printf("                                                .---------------------------.\n");
            printf("                                                |   Trier le fichier par :  |\n");
            printf("                                                |   1)Ordre Croissant       |\n");
            printf("                                                |   2)Ordre decroissant     |\n");
            printf("                                                '---------------------------'\n");
            scanf("%i",&c);
            if(c==1)
            {
                printf("                                                .----------------------------.\n");
                printf("                                                |   Trier le fichier selon : |\n");
                printf("                                                |   1)Le temps               |\n");
                printf("                                                |   2)Le pouls               |\n");
                printf("                                                '----------------------------'\n");
                scanf("%i",&c);
                if(c==1)
                {
                    tri_croissant_temps(vlist, &size);
                    afficher(vlist, size);
                    fichier_croissant_temps(vlist, &size);
                }
                else if(c==2)
                {
                    tri_croissant_pouls(vlist, &size);
                    afficher(vlist, size);
                    fichier_croissant_pouls(vlist, &size);
                }
            }
            else if (c==2)
            {
                printf("                                                .----------------------------.\n");
                printf("                                                |   Trier le fichier selon : |\n");
                printf("                                                |   1)Le temps               |\n");
                printf("                                                |   2)Le pouls               |\n");
                printf("                                                '----------------------------'\n");
                scanf("%i",&c);
                if(c==1)
                {
                    tri_decroissant_temps(vlist, &size);
                    afficher(vlist, size);
                    fichier_decroissant_temps(vlist, &size);
                }
                else if(c==2)
                {
                    tri_decroissant_pouls(vlist, &size);
                    afficher(vlist, size);
                    fichier_decroissant_pouls(vlist, &size);
                }
            }
        }

		else if(c==3)
		{
            instant_t(vlist, &size);
		}
		else if(c==4)
		{
            moyenne_plage();
		}
		else if(c==5)
        {
            moyenne_generale();
        }
		else if(c==6)
		{
			nb_valeurs(vlist, &size);
		}
		else if(c==7)
		{
            valeurs_min_max(vlist, &size);
		}
		else if(c==8)
        {
        {
            printf("                                            .---------------------------------------.\n");
            printf("                                            |   Quel tri voulez-vous enregistrer :  |\n");
            printf("                                            |   1)Tri Croissant                     |\n");
            printf("                                            |   2)Tri decroissant                   |\n");
            printf("                                            '---------------------------------------'\n");
            scanf("%i",&c);
            if(c==1)
            {
                printf("                                            .----------------------------------.\n");
                printf("                                            |   Selon quoi voulez-vous trier : |\n");
                printf("                                            |   1)Le temps                     |\n");
                printf("                                            |   2)Le pouls                     |\n");
                printf("                                            '----------------------------------'\n");
                scanf("%i",&c);
                if(c==1)
                {
                    tri_croissant_temps(vlist, &size);
                    fichier_croissant_temps(vlist, &size);
                    printf("Vous avez enregistrer les valeurs trier par ordre croissant selon le temps dans le fichier \"croissant_temps.csv\"");
                }
                else if(c==2)
                {
                    tri_croissant_pouls(vlist, &size);
                    fichier_croissant_pouls(vlist, &size);
                    printf("Vous avez enregistrer les valeurs trier par ordre croissant selon le pouls dans le fichier \"croissant_pouls.csv\"");
                }
            }
            else if (c==2)
            {
                printf("                                            .---------------------------------.\n");
                printf("                                            |   Selon quoi voulez-vous trier: |\n");
                printf("                                            |   1)Le temps                    |\n");
                printf("                                            |   2)Le pouls                    |\n");
                printf("                                            '---------------------------------'\n");
                scanf("%i",&c);
                if(c==1)
                {
                    tri_decroissant_temps(vlist, &size);
                    fichier_decroissant_temps(vlist, &size);
                    printf("Vous avez enregistrer les valeurs trier par ordre decroissant selon le temps dans le fichier \"decroissant_temps.csv\"");
                }
                else if(c==2)
                {
                    tri_decroissant_pouls(vlist, &size);
                    fichier_decroissant_pouls(vlist, &size);
                    printf("Vous avez enregistrer les valeurs trier par ordre decroissant selon le pouls dans le fichier \"decroissant_pouls.csv\"");
                }
            }
        }

        }
            printf("\n");
            printf("'----------------------------------------------------------------------------------------------------------------------'\n");
            printf("                                            .------------------------------------.\n");
			printf("                                            |   Voulez-vous refaire une action ? |\n");
			printf("                                            |   1)Oui                            |\n");
			printf("                                            |   0)Non                            |\n");
			printf("                                            '------------------------------------'\n");
			scanf("%i",&c);
		if(c==0)
		{
			l=1;
		}
	}
}


