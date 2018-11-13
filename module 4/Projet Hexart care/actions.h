#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

void afficher_ordre();
void tri_croissant_temps(Valeurs *vlist, int *size);
void tri_decroissant_temps(Valeurs *vlist, int *size);
void tri_croissant_pouls(Valeurs *vlist, int *size);
void tri_decroissant_pouls(Valeurs *vlist, int *size);
void nb_valeurs();
void valeurs_mini(Valeurs *vlist);
void afficher(Valeurs* vlist, int size);
void valeurs_min_max();
int recherche_dicho(Valeurs* tab, int size, int val);

#endif // ACTIONS_H_INCLUDED
