/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** scaling
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"
#include "include/my_macro_abs.h"

var_scale scale_calc(var_scale scale)
{
    scale.tab[0] = scale.a;
    scale.tab[1] = 0;
    scale.tab[2] = 0;
    scale.tab[3] = 0;
    scale.tab[4] = scale.b;
    scale.tab[5] = 0;
    scale.tab[6] = 0;
    scale.tab[7] = 0;
    scale.tab[8] = 1;
    return (scale);
}

void scaling(int i, char **av, float *matrice_temp, base_matrice *base)
{
    var_scale scale;
    base->tab[0] = atof(av[1]);
    base->tab[1] = atof(av[2]);
    base->tab[2] = 1;
    base->x = atof(av[1]);
    base->y = atof(av[2]);
    scale.a = atof(av[i + 1]);
    scale.b = atof(av[i + 2]);
    scale = scale_calc(scale);

    if (base->display == 1)
        display_scale(scale);
    for (int i = 0; i < 9; i++)
        matrice_temp[i] = scale.tab[i];
    return;
}