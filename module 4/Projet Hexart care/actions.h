#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

//This file contains all the prototypes of the functions as well as their prototypes
void order_display(Value *vlist, int *size);
void sort_increasing_time(Value *vlist, int *size);
void sort_decreasing_time(Value *vlist, int *size);
void sort_increasing_puls(Value *vlist, int *size);
void sort_decreasing_puls(Value *vlist, int *size);
void nb_value(Value *vlist, int *size);
void display(Value *vlist, int size);
void value_min_max(Value *vlist, int *size);
void instant_t(Value *vlist, int *size);
int average_range();
void average_general();
int researche_dicho(Value* tab, int size, int val);
void file_increasing_time(Value *vlist, int *size);
void file_decreasing_time(Value *vlist, int *size);
void file_increasing_puls(Value *vlist, int *size);
void file_decreasing_puls(Value *vlist, int *size);

#endif // ACTIONS_H_INCLUDED
