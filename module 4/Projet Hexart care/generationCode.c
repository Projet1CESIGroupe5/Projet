//libraries implementation
#include <stdio.h>
#include "generationCode.h"

//in each function, set the variables to parameter
//type of function void because it doesn't return anything
//start of an function
void Mode_1(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
        "int MODE = %d;\n"
        "//start of the function\n"
        "void function()\n {\n"
        "//beginning of a loop for\n"
        "//condition of the loop : initialize variable i to 2, must i less than 12 and i increments of 1 with each step\n "
        " for(int i = 2; i < 12; i++)\n {\n"
        "//sets a HIGH level to a numeric pin\n"
        "//sets led i on\n"
        " digitalWrite(i, HIGH);\n }\n"
        "//end of a loop for\n"
        "//waits 200 milliseconds\n"
        " delay(200); \n"
        "//new loop for with the same conditions as the previous loop\n"
        " for(int i = 2; i < 12; i++)\n {\n"
        "//sets the led i off\n"
        " digitalWrite(i, LOW);\n }\n"
        "//end of a loop for\n"
        "//waits 200 milliseconds\n"
        " delay(200);\n }", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_2(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file,"//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n "
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 2, must i less than 12 and i increments of 2 with each step\n "
            "for(int i = 2; i < 12; i+=2)\n {\n"
            "//sets led i on\n"
            " digitalWrite(i, HIGH);\n "
            "//waits 200 milliseconds\n"
            " delay(200); \n"
            "//sets led i off\n"
            " digitalWrite(i, LOW);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n }\n}"
            "//end of a loop for\n", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_3(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//beginning of a loop for"
            "//conditions of the loop : initialize variable i to 2, must i less than 12 and i increments of 3 with each step\n "
            " for(int i = 0; i < 12; i+=3)\n {\n"
            "//sets the led i on\n"
            " digitalWrite(i, HIGH);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n "
            "//sets the led i off\n"
            " digitalWrite(i, LOW);\n"
            "//waits 200 milliseconds\n"
            " delay(200);\n }\n}", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_4(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 2, must i less than 12 and i increments of 2 with each step\n "
            " for(int i = 2; i < 12; i+=2)\n {\n "
            "//sets the led i on\n"
            " digitalWrite(i, HIGH);\n }\n "
            "//waits 200 milliseconds\n"
            " delay(200); \n"
            "new loop for with the same conditions as the previous loop\n"
            " for(int i = 2; i < 12; i+=2)\n {\n "
            "//sets the led i off\n"
            " digitalWrite(i, LOW);\n }\n "
            "//waits 200 milliseconds\n"
            " delay(200); \n"
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 3, must i less than 12 and i increments of 2 with each step\n "
            " for(int i = 3; i < 12; i+=2)\n {\n"
            "//sets the led i on\n"
            " digitalWrite(i, HIGH);\n }\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n "
            "//new loop for with the same conditions as the previous loop\n"
            " for(int i = 3; i < 12; i+=2)\n {\n"
            "//sets the led i off\n"
            " digitalWrite(i, LOW);\n }\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n}", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_5(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 11, must i higher or equal to 12 and i increments of -1 with each step\n "
            " for(int i = 11; i >=2; i--)\n {\n"
            "//sets the led i on\n"
            " digitalWrite(i, HIGH);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n  "
            "//sets the led i off\n"
            " digitalWrite(i, LOW);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n }\n}", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_6(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 0, must i less than 12 and i increments of 1 with each step\n "
            " for(int i = 0; i < 12; i++)\n {\n"
            "//sets the led i on\n"
            " digitalWrite(i, HIGH);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n "
            "//sets the led i off\n"
            " digitalWrite(i, LOW);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n }\n }", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_7(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//beginning of a loop for"
            "//condition of the loop : initialize variable i to 0, must i less than 12 and i increments of 1 with each step\n "
            " for(int i = 0; i < 12; i++)\n {\n"
            "//sets the led i off\n"
            " digitalWrite(LEDS[i], LOW);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n "
            "//sets the led i on\n"
            " digitalWrite(LEDS[i], HIGH);\n "
            "//waits 200 milliseconds\n"
            " delay(200);\n }\n}", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_8(int choice)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d;\n"
            "//declaration and initialisation of a constant TEMPS to 60\n"
            "const int TEMPS = 60;\n"
            "//start of the function\n"
            "void function()\n {\n"
            "//sets the led 3 on\n"
            " digitalWrite(3, HIGH);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 2 on\n"
            " digitalWrite(2, HIGH);\n "
            "//sets the led 4 on\n"
            " digitalWrite(4, HIGH);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS);\n "
            "//sets the led 5 on\n"
            " digitalWrite(5, HIGH);\n "
            "//sets the led 11 on\n"
            " digitalWrite(11, HIGH); \n"
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS);\n "
            "//sets the led 6 on\n"
            " digitalWrite(6, HIGH);\n "
            "//sets the led 10 on\n"
            " digitalWrite(10, HIGH);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS);\n "
            "//sets the led 7 on\n"
            " digitalWrite(7, HIGH); \n"
            "//sets the led 9 on\n"
            " digitalWrite(9, HIGH);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 8 on\n"
            " digitalWrite(8, HIGH);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS);\n "
            "//sets the led 3 off\n"
            " digitalWrite(3, LOW); \n"
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 2 off\n"
            " digitalWrite(2, LOW);\n "
            "//sets the led 4 off\n"
            " digitalWrite(4, LOW);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); "
            "//sets the led 5 off\n"
            " digitalWrite(5, LOW);\n "
            "//sets the led 11 off\n"
            " digitalWrite(11, LOW); \n"
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 6 off\n"
            " digitalWrite(6, LOW); \n"
            "//sets the led 10 off\n"
            " digitalWrite(10, LOW);\n "
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 7 off\n"
            " digitalWrite(7, LOW); \n"
            "//sets the led 9 off\n"
            " digitalWrite(9, LOW); \n"
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS); \n"
            "//sets the led 8 off\n"
            " digitalWrite(8, LOW); \n"
            "//waits TEMPS milliseconds\n"
            " delay(TEMPS);\n}", choice);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_9(int choice, int led)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            "int MODE = %d; \n"
            "//start of the function\n"
            "void function()\n {\n"
            "//declaration and initialization an integer led variable\n"
            " int led = %d;\n"
            "//sets the led on\n"
            " digitalWrite(led, HIGH);\n"
            "//waits 200 milliseconds\n"
            " delay(200);\n"
            "//sets the led  off\n"
            " digitalWrite(led, LOW);\n"
            "//waits 200 milliseconds\n"
            " delay(200);\n"
            "//sets the led on\n"
            " digitalWrite(led, HIGH);\n}", choice, led);

    //closing the file
    fclose(file);
}

//start of an function
void Mode_10(int choice, int led)
{
    //declaring the FILE* pointer for each useful file
    //pointer initialized to NULL
    FILE* file = NULL;
    //open file coeur.c/param.h en mode w (écriture seule)
    //the file pointer becomes a pointer on coeur.c/param.h
    file = fopen("coeur.c/param.h", "w");

    //write to the file
    fprintf(file, "//declaration of an integer MODE variable\n"
            " int MODE = %d; \n"
            "//start of the function\n"
            " void function()\n {\n "
            "declaration and initialization an integer variable led to random\n"
            " int led = random(2, 12);\n"
            "//sets the led on\n"
            " digitalWrite(led, HIGH);\n"
            "//waits 200 milliseconds\n"
            " delay(200);\n"
            "//sets the led  off\n"
            " digitalWrite(led, LOW);\n"
            "//waits 200 milliseconds\n"
            " delay(200);\n }", choice, led);

    //closing the file
    fclose(file);
}


/*void mode_de_leds(int choix)
{
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w");

    fprintf(fichier, "const int CONFIG = %i", choix);

    fclose(fichier);
}*/

