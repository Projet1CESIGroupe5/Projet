#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct Valeurs Valeurs;
struct Valeurs
{
    int pouls;
    int temps;
};

Valeurs* stocker(int *size, Valeurs* vlist);
#endif // DONNEES_H_INCLUDED
