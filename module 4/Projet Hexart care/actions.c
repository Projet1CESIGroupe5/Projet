#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "donnees.h"
#include "actions.h"

void order_display(Value *vlist, int *size)//This function display the file in order
{
    int i = 0;//declaration of the variable "i"
    stock(&i, vlist);//Call the function stock
    display(vlist, i);//Call the function display
}
void sort_increasing_time(Value *vlist, int *size)//This function sort the data in ascending order by time
{
    stock(size, vlist);//Call the function stock
    int i, j;//Declaration of the variables "i" and "j"
    for(i = 1; i < *size; i++)//The for is used to browse the file
    {
        Value var = vlist[i];//The list "vlist[i] creates in the function stock is stored in "Value var"
        for(j = i; j > 0 && vlist[j-1].time > var.time; j--)//This for is used to re-start the operation inside while the condition are not true
        {
            vlist[j] = vlist[j-1];//This operation switch the value in vlist[j] with the value vlist[-1] to continue with all the value
        }
        vlist[j] = var;//Finally the last value is stock in "var"
    }
}
void sort_increasing_puls(Value *vlist, int *size)//They is only difference between this sort and the sort previously
{
    stock(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Value var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].puls > var.puls; j--)//In the previous sort we used the time or here we used the pulse
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void sort_decreasing_time(Value *vlist, int *size)//They are again only one difference between the sort increasing(time and pulse) and the sort decreasing (time and pulse)
{
    stock(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Value var = vlist[i];//The difference are the condition we want the descending order
        for(j = i; j > 0 && vlist[j-1].time < var.time; j--)//So we change the "less than symbol(<)" to a "greater-than symbol(>)"
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void sort_decreasing_puls(Value *vlist, int *size)//Same things for the sort decreasing by the pulse
{
    stock(size, vlist);
    int i, j;
    for(i = 1; i < *size; i++)
    {
        Value var = vlist[i];
        for(j = i; j > 0 && vlist[j-1].puls < var.puls; j--)//We used the pulse and change the symbol
        {
            vlist[j] = vlist[j-1];
        }
        vlist[j] = var;
    }
}
void display(Value* vlist, int size)//This is the function who display the values
{
    int i = 0, j = (size)/4, k = (size/2), l = (3*size/4);//Here we divide the list of value in four list to have a better display
    printf("                                .-------------------------------------------------------------.\n");//"printf" for the layout page
    printf("                                |Temps\tPouls |Temps\tPouls |Temps\tPouls |Temps\tPouls |\n");//This one to explain what we display

    while (i <= (size-1)/4)//This while is used to browse the file and display all the value
    {
    printf("                                |%i \t%i    |%i \t%i    |%i\t%i    |%i\t%i    |\n",vlist[i].time,vlist[i].puls,vlist[j].time,vlist[j].puls,vlist[k].time,vlist[k].puls,vlist[l].time,vlist[l].puls);
    //The very long "printf" just above display all the values of the file
    i++,j++,k++,l++;//Here we increments the variables with the values to display the next value
    }
    printf("                                '-------------------------------------------------------------'\n");
}

void nb_value(Value *vlist, int *size)//This function display the number of line the file have
{
    stock(size, vlist);//Call the function stock
    printf("                                               .-----------------------------.\n");
    printf("                                               |   Nombre de valeurs = %i |\n",*size);//Display the number of line of the file
    printf("                                               '-----------------------------'\n");
}
void instant_t(Value *vlist, int *size)//This function research the value of the pulse for one value of the time and display it
{
    stock(size, vlist);//Call the function stock
    int val;//Declaration of the variables "var"
    printf("                                      .----------------------------------------------.\n");
    printf("                                      |   Pour quel instant t voulez-vous le pouls ? |\n");//ask to the user for what time he want the pulse
    printf("                                      '----------------------------------------------'\n");
    scanf("%i",&val);//recover the value the user want to search
    sort_increasing_time(vlist, size);//Call the function "sort_increasing_time"
    int index = researche_dicho(vlist, *size, val);//Declaration of the variable index and stock the result of the calling "research_dicho" in this variables
    if (index == -1)//If the function "research_dicho" can't found the values, the values is not in the file
    {
        printf("                                    .----------------------------------------------------.\n");
        printf("                                    |   La valeur recherche n'est pas dans le fichier   |\n");//So if the value is not in the file, we given this information to the user
        printf("                                    '----------------------------------------------------'\n");
    }
    else//if the value is found we can display it, and display the pulse corresponding
    {
    int a = vlist[index].puls;//As we display the results within a framework,
    int b = vlist[index].time;//The size of the framework must be adjusted according to the values search and find
    if (a<100)//So all the "if" and the "printf" below are here just to have a framework for each type of value
    {
        if(b<10)
        {
            printf("                                         .----------------------------------------.\n");
            printf("                                         |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                         '----------------------------------------'\n");
        }
        else if(b<100)
        {
            printf("                                         .-----------------------------------------.\n");
            printf("                                         |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                         '-----------------------------------------'\n");
        }
        else if(b<1000)
        {
            printf("                                         .------------------------------------------.\n");
            printf("                                         |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                         '------------------------------------------'\n");
        }
        else if(b<=10000)
        {
            printf("                                       .--------------------------------------------.\n");
            printf("                                       |   A l'instant t=%i, le pouls est de %i   |\n", vlist[index].time, vlist[index].puls);
            printf("                                       '--------------------------------------------'\n");
        }
    }

    else
    {
        if(b<10)
        {
            printf("                                        .-----------------------------------------.\n");
            printf("                                        |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                        '-----------------------------------------'\n");
        }
        else if(b<100)
        {
            printf("                                        .------------------------------------------.\n");
            printf("                                        |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                        '------------------------------------------'\n");
        }
        else if(b<1000)
        {
            printf("                                        .-------------------------------------------.\n");
            printf("                                        |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                        '-------------------------------------------'\n");
        }
        else if(b<=10000)
        {
            printf("                                       .--------------------------------------------.\n");
            printf("                                       |   A l'instant t=%i, le pouls est de %i  |\n", vlist[index].time, vlist[index].puls);
            printf("                                       '--------------------------------------------'\n");
        }
    }
}
}
void value_min_max(Value *vlist, int *size)//This function research the value maximum and minimum of the pulse to display it
{
    stock(size, vlist);//Call the function stock

    sort_increasing_puls(vlist, size);//Call the function "sort_increasing_puls"
    printf("                                              .--------------------------------.\n");
    printf("                                              |    Le pouls minimum est : %i   |\n", vlist[0].puls);//Display the index 0 of the value sorting so the minimum

    sort_decreasing_puls(vlist, size);//Call the function "sort_decreasing_puls"
    printf("                                              |    Le pouls maximum est : %i  |\n", vlist[0].puls);//display the index 0 of the value sorting so the maximum
    printf("                                              '--------------------------------'\n");
}
int researche_dicho(Value *tab, int size, int val)//This function research a value in the file with the binary_search_algorithm
{
  bool find;//Declaration of the variable "find" of type "bool"
  int ib;//Declaration of the variable "ib" who represent the first index of the file
  int ie;//Declaration of the variable "ie" who represent the last index of the file
  int im;//Declaration of the variable "im" who represent the middle index of the file

  /* initialisation de ces variables avant la boucle de recherche */
  find = false;//"find" is initialized at false
  ib = 0;//"ib" is initialized at 0
  ie = size;//"ie" is initialized at size

  /* boucle de recherche */
  while(!find && ((ie - ib) > 1))//Wile find is not true and "(ie-ib)>1" we re-start the operation inside the "while"
    {
    im = (ib + ie)/2;//"im" is initialized at (ib+ie)/2

    find = (tab[im].time == val);

    if(tab[im].time > val) ie = im;//if the middle index > at val, "ie" is initialized at im
    else ib = im;//else "ib" is initialized at "im"
    }
  /* test conditionnant la valeur que la fonction va renvoyer */
  if(tab[ib].time == val) return(ib);//When the index "ib" is equal to the val search, the index ib is return
  else return -1;//else we return -1 to say they are a mistakes
}
int average_range()//This function calculate an average of a range of time asked by the user
{
    Value vlist[20000];
    int size = 0;
    int t1, t2;//Declaration of the variables t1 and t2
    printf("                                        .----------------------------------------------.\n");
    printf("                                        |   Indiquer le debut de la plage de donnees   |\n");//Ask to the user the first value of the range
    printf("                                        '----------------------------------------------'\n");
    scanf("%i", &t1);//Retrieve the first value of the range and stocked it in the variable t1
    printf("                                        .----------------------------------------------.\n");
    printf("                                        |   Indiquer la fin de la plage de donnees     |\n");//Ask him the second value
    printf("                                        '----------------------------------------------'\n");
    scanf("%i", &t2);//Recover the second value of the range and stocked it in the variable t2

    sort_increasing_time(vlist, &size);//Call the function "sort_increasing_time" to have the value in order

    int index1 = researche_dicho(vlist, size, t1);//The value found for the value stocked in t1 are stocked in index 1
    int index2 = researche_dicho(vlist, size, t2);//The value found for the value stocked in t2 are stocked in index 2

    if (index1 == -1 && index2 == -1)//Check if the values ask by the user are valid
    {
        printf("                                              .---------------------------------.\n");
        printf("                                              |   Les valeurs sont invalides    |\n");//if the range is not valid, we given this information to the user
        printf("                                              '---------------------------------'\n");
    }
    else if (index1 == -1)//Check if the first values are valid
    {
        printf("                                      .--------------------------------------------------.\n");
        printf("                                      |   La premiere valeur n'est pas dans le fichier   |\n");//if the second value are not valid, send the error message
        printf("                                      '--------------------------------------------------'\n");
    }
    else if (index2 == -1)//Check if the second value are valid
    {
        printf("                                      .--------------------------------------------------.\n");
        printf("                                      |   La deuxieme valeur n'est pas dans le fichier   |\n");//if the first value are not valid, send the error message
        printf("                                      '--------------------------------------------------'\n");
    }
    else if (t2<=t1)//check if the range is valid
    {
        printf("                                                .-------------------------------.\n");
        printf("                                                |   Plage de donnees invalide   |\n");//if the range are not valid, send the error message
        printf("                                                '-------------------------------'\n");
    }
    else//else all the values and the range are valid we can calculate the average of the range
    {
    int puls = 0;//Declare puls and initialized it to 0
    for(int i = index1; i <= index2; i++)//while the first value of the range are < to the last value
    {
        puls += vlist[i].puls;//add the values of the pulse in the variables pulse
    }
    int average = puls/(index2-index1+1);//To do the average we divide "puls" by the number of values in the range
    printf("                                        .---------------------------------------------------.\n");
    printf("                                        |   Pour une plage de donnees allant de %i a %i \n",t1,t2);//Display the range
    printf("                                        |   La moyenne des pouls est de : %i                |\n",average);//Display the average of the range
    printf("                                        '---------------------------------------------------'\n");
    }
}

void average_file()//This function calculate the average of all the file
{
    Value vlist[20000];
    int size = 0;

    sort_increasing_time(vlist, &size);//Call the function "sort_increasing_time"
    int index1 = vlist[0].time;//Stocked the first value of the file sorting in the variables index1
    int index2 = vlist[size-1].time;//Stocked the last value of the file sorting in the variables index2
    int puls = 0;//Declaration the variables "puls" and initialized it at 0
    for(int i = index1; i <= index2; i++)//we do exactly the same thing as in the function "average_range"
    {
        puls += vlist[i].puls;
    }
    int average = puls/(index2-index1+1);
    printf("                                      .-------------------------------------------------.\n");
    printf("                                      |    La moyenne de pouls de ce fichier est : %i   |\n",average);//so we as well the average of the file
    printf("                                      '-------------------------------------------------'\n");
}
void file_increasing_time(Value *vlist, int *size)//This function saved the file sorting in ascending order by time
{
    int i;//Declaration of the variables "i"
    FILE* file = NULL;//Creation of the pointer file
    file = fopen("croissant_temps.csv","w");//opening of the file in mode "write only", if the file does not exist it will be created
    for (i = 0; i < *size; i++)//This for browse the file
    {
        fprintf(file, "%i", vlist[i].time);//write the value of the time in the file
        fprintf(file, ";%i\n", vlist[i].puls);//then write the value of the pulse
    }
    fclose(file);//A file opening, need to be closed
}
void file_decreasing_time(Value *vlist, int *size)//This function saved the file sorting in descending order by time
{
    //This function work exactly as the same way as the previous function
    //The only difference is the sort and so the file who we write in
    int i;
    FILE* file = NULL;
    file = fopen("decroissant_temps.csv","w+");
    for (i = 0; i < *size; i++)
    {
        fprintf(file, "%i", vlist[i].time);
        fprintf(file, ";%i\n", vlist[i].puls);
    }
    fclose(file);
}
void file_increasing_puls(Value *vlist, int *size)//This function saved the file sorting in ascending order by pulse
{
    //This function work exactly as the same way as the previous function
    //The only difference is the sort and so the file who we write in
    int i;
    FILE* file = NULL;
    file = fopen("croissant_pouls.csv","w+");
    for (i = 0; i < *size; i++)
    {
        fprintf(file, "%i", vlist[i].time);
        fprintf(file, ";%i\n", vlist[i].puls);
    }
    fclose(file);
}
void file_decreasing_puls(Value *vlist, int *size)//This function saved the file sorting in descending order by pulse
{
    //This function work exactly as the same way as the previous function
    //The only difference is the sort and so the file who we write in
    int i;
    FILE* file = NULL;
    file = fopen("decroissant_pouls.csv","w+");
    for (i = 0; i < *size; i++)
    {
        fprintf(file, "%i", vlist[i].time);
        fprintf(file, ";%i\n", vlist[i].puls);
    }
    fclose(file);
}
