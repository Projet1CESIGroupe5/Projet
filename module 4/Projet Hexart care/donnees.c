#include <stdio.h>
#include <stdlib.h>


void lecture()
{
            FILE* fichier = NULL;
            char caractereActuel;
            fichier = fopen("battements.csv","r");

            if (fichier != NULL)
            {
                do
                {
                    caractereActuel = fgetc(fichier);
                    printf("%c", caractereActuel);
                }while(caractereActuel != EOF);

                    fclose(fichier);
            }
                return 0;
}

