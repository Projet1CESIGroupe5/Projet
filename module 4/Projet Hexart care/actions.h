#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

void afficher_ordre(Valeurs *vlist, int *size);
void tri_croissant_temps(Valeurs *vlist, int *size);
void tri_decroissant_temps(Valeurs *vlist, int *size);
void tri_croissant_pouls(Valeurs *vlist, int *size);
void tri_decroissant_pouls(Valeurs *vlist, int *size);
void nb_valeurs();
void afficher(Valeurs* vlist, int size);
void valeurs_min_max();
void instant_t();
int moyenne_plage();
void moyenne_generale();
int recherche_dicho(Valeurs* tab, int size, int val);
void fichier_croissant_temps(Valeurs *vlist, int *size);
void fichier_decroissant_temps(Valeurs *vlist, int *size);
void fichier_croissant_pouls(Valeurs *vlist, int *size);
void fichier_decroissant_pouls(Valeurs *vlist, int *size);

#endif // ACTIONS_H_INCLUDED
