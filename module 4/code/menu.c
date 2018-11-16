#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"


//Declaration of the variables
    int c=0;//declaration of the choice variables
    int l=0;//declaration of the while variables

void menu()//declaration of the function "menu"
{
while(l==0)//while the condition of the "while" is true we do the action again
	{
	    system("color 8e");
	    //system("color 0c");
	    //system("color f0");
	    //system("color fc");//This function with the parameter "color", is used for change the color of the background and of the text
	    system("cls");//This one delete the previous display
	    printf("                                                    .---------------------.\n");// All of these functions are used to display the choice menu
	    printf("                                                    |CARDIO FREQUENCEMETRE|\n");
	    printf("                                                    '---------------------'\n");
	    printf("                            .---------------------------------------------------------------------.\n");
        printf("                            |   Veuillez choisir l'action a effectuer :                           |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t1)Afficher les donnees dans l'ordre du fichier            |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t2)Trier le fichier                                        |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t3)Afficher les donnees pour un temps particulier          |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t4)Calculer le moyenne de pouls pour une plage de temps    |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t5)Calculer la moyenne du pouls de tout le fichier         |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t6)Afficher le nombre de ligne en memoire                  |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t7)Afficher le max et min de pouls                         |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t8)Enregistrer un tri dans un fichier                      |\n");
        printf("                            |                                                                     |\n");
        printf("                            |\t\t0)Quitter                                                 |\n");
	    printf("                            '---------------------------------------------------------------------'\n\n");
        printf(".----------------------------------------------------------------------------------------------------------------------.\n");
        scanf("%i",&c);//The "scanf" function retrieves the user's choice

        Value vlist[20000];//Creation of the list of values
        int size = 0;
    switch(c)//Start of the switch instruction, c is the variables tested in each case
    {
        case 1://test the value 1
		{
             order_display(vlist, &size);//call of the functions "order_display"
        break;//quit the conditional structure
		}
        case 2 ://test the value 2
        {
            printf("                                                .---------------------------.\n");
            printf("                                                |   Trier le fichier par :  |\n");//If the user chose to sort the file
            printf("                                                |   1)Ordre Croissant       |\n");//He chooses how he wants to sort it
            printf("                                                |   2)Ordre decroissant     |\n");
            printf("                                                '---------------------------'\n");
            scanf("%i",&c);//Recovered the user's choice
            if(c==1)//If he chose the first kind of sorting
            {
                printf("                                                .----------------------------.\n");
                printf("                                                |   Trier le fichier selon : |\n");//When the user chooses the kind of sorting
                printf("                                                |   1)Le temps               |\n");//We ask him what he wants to sort
                printf("                                                |   2)Le pouls               |\n");
                printf("                                                '----------------------------'\n");
                scanf("%i",&c);//Again this functions collect the user's choice
                if(c==1)//And again this function check the first choice
                {
                    sort_increasing_time(vlist, &size);//Call the functions "sort_increasing_time
                    display(vlist, size);//Call the function "display"
                }
                else if(c==2)//And this one check the other choice if the first is not true
                {
                    sort_increasing_puls(vlist, &size);//Call the function "sort_increasing_puls"
                    display(vlist, size);//Call the function "display"
                }
            }
            else if (c==2)//This if check the choice of the kind of sorting
            {
                printf("                                                .----------------------------.\n");
                printf("                                                |   Trier le fichier selon : |\n");//So we again ask him what he want to sort
                printf("                                                |   1)Le temps               |\n");
                printf("                                                |   2)Le pouls               |\n");
                printf("                                                '----------------------------'\n");
                scanf("%i",&c);
                if(c==1)//This if check the user's choice an call the corresponding function
                {
                    sort_decreasing_time(vlist, &size);//Si we call the function "sort_decreasing_time
                    display(vlist, size);//And call the functions "display"
                }
                else if(c==2)//if the first if is not check we check this one
                {
                    sort_decreasing_puls(vlist, &size);//Call the function "sort_decreasing_puls"
                    display(vlist, size);//Call the "display" function
                }
            }
            break;//quit the conditional structure
        }

		case 3 ://test value 3
		{
            instant_t(vlist, &size);//Call the function "instant_t"
            break;//quit the conditional structure
		}
		case 4 ://test value 4
		{
            average_range();//Cal the function "average_range"
            break;//quit the conditional structure
		}
		case 5 ://test value 5
        {
            average_file();//Call "average_file"
            break;//quit the conditional structure
        }
		case 6 ://test value 6
		{
			nb_value(vlist, &size);//Call "nb_value"
			break;//quit the conditional structure
		}
		case 7 ://test value 7
		{
            value_min_max(vlist, &size);//Call "value_min_max"
            break;//quit the conditional structure
		}
		case 8 ://test value 8
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
                    sort_increasing_time(vlist, &size);
                    file_increasing_time(vlist, &size);//The only difference with the second are the function "file_increasing_time" in place of the functions "display"
                    printf("Vous avez enregistrer les valeurs trier par ordre croissant selon le temps dans le fichier \"croissant_temps.csv\"");
                }
                else if(c==2)
                {
                    sort_increasing_puls(vlist, &size);
                    file_increasing_puls(vlist, &size);//Again here the only difference is the function "display" who was replaced
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
                    sort_decreasing_time(vlist, &size);
                    file_decreasing_time(vlist, &size);//Always the same change
                    printf("Vous avez enregistrer les valeurs trier par ordre decroissant selon le temps dans le fichier \"decroissant_temps.csv\"");
                }
                else if(c==2)
                {
                    sort_decreasing_puls(vlist, &size);
                    file_decreasing_puls(vlist, &size);//one more time the function display has been replaced
                    printf("Vous avez enregistrer les valeurs trier par ordre decroissant selon le pouls dans le fichier \"decroissant_pouls.csv\"");
                }//The "printf" confirm to the user that he has saved the file properly
            }//The real difference with the second "if" is that the data is saved and not displayed
            break;//quit the conditional structure
        }
        default :
            printf("                                             .-----------------------------------.\n");
            printf("                                             |   Votre choix n'est pas valide    |\n");
            printf("                                             '-----------------------------------'\n");
        break;

	}
	 printf("\n");
            printf(".----------------------------------------------------------------------------------------------------------------------.\n");
            printf("                                            .------------------------------------.\n");
			printf("                                            |   Voulez-vous refaire une action ? |\n");//Here we just ask the user if he
			printf("                                            |   1)Oui                            |\n");//wants to do an other action
			printf("                                            |   0)Non                            |\n");//or quit the program
			printf("                                            '------------------------------------'\n");
			scanf("%i",&c);//We recover one other time the choice of the user
		if(c==0)//If the user choose to quit the program
		{
			l=1;//The condition of the "while" becomes false
		}

    }
}

