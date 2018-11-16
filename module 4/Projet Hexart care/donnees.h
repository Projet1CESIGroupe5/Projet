#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED
//This file contain the prototype of the structure
typedef struct Value Value;
struct Value
{
    int puls;
    int time;
};

void stock(int *size, Value* vlist);//Prototype of the function "stock"

#endif // DONNEES_H_INCLUDED
