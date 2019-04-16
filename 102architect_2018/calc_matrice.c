/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** 102Archi
*/
#include "include/struct_lib.h"

void matrix_3_to_1(float *tab, float *tab2, float *newtab)
{
    newtab[0] = tab[0]*tab2[0]+tab[1]*tab2[1]+tab[2]*tab2[2];
    newtab[1] = tab[3]*tab2[0]+tab[4]*tab2[1]+tab[5]*tab2[2];
    newtab[2] = tab[6]*tab2[0]+tab[7]*tab2[1]+tab[8]*tab2[2];
}

void matrix_3_to_3(float *tab, float *tab2, float *newtab)
{
    newtab[0] = tab[0]*tab2[0]+tab[1]*tab2[3]+tab[2]*tab2[6];
    newtab[1] = tab[0]*tab2[1]+tab[1]*tab2[4]+tab[2]*tab2[7];
    newtab[2] = tab[0]*tab2[2]+tab[1]*tab2[5]+tab[2]*tab2[8];
    newtab[3] = tab[3]*tab2[0]+tab[4]*tab2[3]+tab[5]*tab2[6];
    newtab[4] = tab[3]*tab2[1]+tab[4]*tab2[4]+tab[5]*tab2[7];
    newtab[5] = tab[3]*tab2[2]+tab[4]*tab2[5]+tab[5]*tab2[8];
    newtab[6] = tab[6]*tab2[0]+tab[7]*tab2[3]+tab[8]*tab2[6];
    newtab[7] = tab[6]*tab2[1]+tab[7]*tab2[4]+tab[8]*tab2[7];
    newtab[8] = tab[6]*tab2[2]+tab[7]*tab2[5]+tab[8]*tab2[8];
}