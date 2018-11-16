#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"

void stock(int *size, Value *vlist)//Definition of the function stock
{
    int i;
    FILE* file = NULL;//Creation of the pointer
    file = fopen("nonTrie.csv","r");//Opening of the file "nonTrie.csv",with the "r" the file is open in reading only
    if (file != NULL)//This "if" check that the file was open properly
    {
        int time, puls;//declaration of the variables "time" and "puls"
        while(fscanf(file, "%i ; %i",&time, &puls)!=EOF)//Reading the data and stock them in the variables "time" and "puls"
        {
            Value v = {0};//The struct Value v is created and initialized
            v.puls = puls;//The data of the puls recover is stocked in the struct v
            v.time = time;//Same things for the data of time
            vlist[*size] = v;//The data of time and puls stocked in v are placed in the array vlist at the index "*size"
            (*size)++;//"*size" is increments of 1
        }
        fclose(file);//the file need to be closed when we are finished
    }
}




