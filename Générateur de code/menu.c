#include "menu.h"
#include <stdio.h>

void Afficher_menu()
{

    int choix;
    printf("Vous voici dans le MENU LEDs\n");
    printf("Entrer le nombre correspondant a la fonction d'allumage voulue\n");
    printf(" 1) Allumer les LEDs toutes ensembles\n 2) Allumer les LEDs 1 sur 2\n");
    printf(" 3) Allumer les LEDs 1 sur 3\n 4) Allumer les LEDs en quinquonce\n");
    printf(" 5) Allumer les LEDs en chenille\n 6) Allumer les LEDs en chenille invers�e\n");
    printf(" 7) Allumer les LEDs en chenille constante\n 8) Allumer les LEDs en guirlande\n");
    printf(" 0) Eteindre le coeur\n");
    scanf("%d", &choix);
    printf("Vous avez choisi : %d", choix);

    Mode_1(choix);

    /*switch(choix)
    {
    case 1 :
        Mode_1();
    break;

    case 2 :
        veriffichier();
        Mode_2();
    break;

    case 3 :
        Mode_3();
    break;

    case 4 :
        Mode_4();
    break;

    case 5 :
        Mode_5();
    break;

    case 6 :
        Mode_6();
    break;

    case 7 :
        Mode_7();
    break;

    case 8 :
        Mode_8();
    break;
    }

    return choix;*/
}
