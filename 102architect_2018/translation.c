/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** translation
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"
#include "include/my_macro_abs.h"

var_trans trans_calc(var_trans trans)
{
    trans.tab[0] = 1;
    trans.tab[1] = 0;
    trans.tab[2] = trans.a;
    trans.tab[3] = 0;
    trans.tab[4] = 1;
    trans.tab[5] = trans.b;
    trans.tab[6] = 0;
    trans.tab[7] = 0;
    trans.tab[8] = 1;
    return (trans);
}

void translation(int i, char **av, float *matrice_temp, base_matrice *base)
{
    var_trans trans;
    base->tab[0] = atof(av[1]);
    base->tab[1] = atof(av[2]);
    base->tab[2] = 1;
    base->x = atof(av[1]);
    base->y = atof(av[2]);
    trans.a = atof(av[i+1]);
    trans.b = atof(av[i+2]);
    trans = trans_calc(trans);

    if (base->display == 1)
        display_translation(trans);
    for (int i = 0; i < 9; i++)
        matrice_temp[i] = trans.tab[i];
    return;
}