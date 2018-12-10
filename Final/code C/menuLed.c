//libraries implementation
#include "menuLed.h"
#include "generationCode.h"
#include <stdio.h>

//call and start of the function
void display_menu()
{
    //declaration of an integer choice variable
    int choice;
    //display of the menu of different modes of lighting LEDs
    //possible display thanks to printf
    printf("                                      .----------------------------------.\n");
    printf("                                      |             MENU LEDs            |\n");
    printf("                                      '----------------------------------'\n");
    printf("                          Entrer le nombre correspondant a la fonction d'allumage voulue\n");
    printf("                         .--------------------------------------------------------------.\n");
    printf("                         |          1) Allumer les LEDs toutes ensembles                |\n");
    printf("                         |          2) Allumer les LEDs 1 sur 2                         |\n");
    printf("                         |          3) Allumer les LEDs 1 sur 3                         |\n");
    printf("                         |          4) Allumer les LEDs en quinquonce                   |\n");
    printf("                         |          5) Allumer les LEDs en chenille inverse             |\n");
    printf("                         |          6) Allumer les LEDs en chenille                     |\n");
    printf("                         |          7) Allumer les LEDs en chenille constante           |\n");
    printf("                         |          8) Allumer les LEDs en guirlande                    |\n");
    printf("                         |          9) Allumer un LED au choix                          |\n");
    printf("                         |          10)Allumer les LEDs aleatoirement                   |\n");
    printf("                         |          0) Eteindre le coeur                                |\n");
    printf("                         '--------------------------------------------------------------'\n");
    //
    scanf("%d", &choice);
    //display of the choice chosen by the user
    //possible display thanks to printf
    printf("                           ------------------------------------------------------------\n");
    printf("\n                                           Vous avez choisi le menu : %d\n\n", choice);
    printf("                           ------------------------------------------------------------\n");
    //declaration of an integer led variable
    int led;

    //start of the loop if
    //the loop executes only if choice is equal to 9
    if(choice == 9)
    {
       //display a question to which the user must answer
       //possible display thanks to printf
       printf("                           ------------------------------------------------------------\n");
       printf("                                         Quelle LED voulez-vous allumer?\n");
       printf("                           ------------------------------------------------------------\n");
       //
       scanf("%d", &led);
    }
    //end of the loop if

    //start of the switch instruction
    //choice is the expression successively tested in case
    mode_de_leds(choice);
}
//end of the function
