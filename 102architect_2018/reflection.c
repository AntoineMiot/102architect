/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** reflection
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"
#include "include/my_macro_abs.h"

var_reflection reflection_calc(var_reflection reflec)
{
    reflec.tab[0] = cos((2 * reflec.angle) * M_PI / 180);
    reflec.tab[1] = sin((2 * reflec.angle) * M_PI / 180);
    reflec.tab[2] = 0;
    reflec.tab[3] = sin((2 * reflec.angle) * M_PI / 180);
    reflec.tab[4] = -cos((2 * reflec.angle) * M_PI / 180);
    reflec.tab[5] = 0;
    reflec.tab[6] = 0;
    reflec.tab[7] = 0;
    reflec.tab[8] = 1;
    return (reflec);
}

var_reflection abso_zero_reflection(var_reflection reflec)
{
    if (reflec.tab[0] > -0.01 && reflec.tab[0] < 0)
        reflec.tab[0] = ABS(reflec.tab[0]);
    if (reflec.tab[1] > -0.01 && reflec.tab[1] < 0)
        reflec.tab[1] = ABS(reflec.tab[1]);
    if (reflec.tab[3] > -0.01 && reflec.tab[3] < 0)
        reflec.tab[3] = ABS(reflec.tab[3]);
    if (reflec.tab[4] > -0.01 && reflec.tab[4] < 0)
        reflec.tab[4] = ABS(reflec.tab[4]);
    return (reflec);
}

void reflection(int i, char **av, float *matrice_temp, base_matrice *base)
{
    var_reflection reflec;
    base->tab[0] = atof(av[1]);
    base->tab[1] = atof(av[2]);
    base->tab[2] = 1;
    base->x = atof(av[1]);
    base->y = atof(av[2]);
    reflec.angle = atoi(av[i+1]);
    reflec = reflection_calc(reflec);
    reflec = abso_zero_reflection(reflec);

    if (base->display == 1)
        display_reflection(reflec);
    for (int i = 0; i < 9; i++)
        matrice_temp[i] = reflec.tab[i];
    return;
}