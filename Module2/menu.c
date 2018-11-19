#include "menu.h"
#include <stdio.h>

void Afficher_menu()
{

    int choix;
    printf("                .----------------------------------.\n");
    printf("                |             MENU LEDs            |\n");
    printf("                '----------------------------------'\n");
    printf("  Entrer le nombre correspondant a la fonction d'allumage voulue\n");
    printf(" .--------------------------------------------------------------.\n");
    printf(" |          1) Allumer les LEDs toutes ensembles                |\n");
    printf(" |          2) Allumer les LEDs 1 sur 2                         |\n");
    printf(" |          3) Allumer les LEDs 1 sur 3                         |\n");
    printf(" |          4) Allumer les LEDs en quinquonce                   |\n");
    printf(" |          5) Allumer les LEDs en chenille                     |\n");
    printf(" |          6) Allumer les LEDs en chenille inversée            |\n");
    printf(" |          7) Allumer les LEDs en chenille constante           |\n");
    printf(" |          8) Allumer les LEDs en guirlande                    |\n");
    printf(" |          0) Eteindre le coeur                                |\n");
    printf(" '--------------------------------------------------------------'\n");
    scanf("%d", &choix);
    printf("\n Vous avez choisi : %d", choix);

    switch(choix)
    {
    case 1 :
        mode(choix);
    break;
    case 2 :
        mode(choix);
    break;
    case 3 :
        mode(choix);
    break;
    case 4 :
        mode(choix);
    break;
    case 5 :
        mode(choix);
    break;
    case 6 :
        mode(choix);
    break;
    case 7 :
        mode(choix);
    break;
    case 8 :
        mode(choix);
    break;
    }
}


