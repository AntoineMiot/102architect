/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** rotation file nececassary
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"
#include "include/my_macro_abs.h"

var_rotate rotate_calc(var_rotate var)
{
    var.tab[0] = cos(var.angle * M_PI / 180);
    var.tab[1] = -sin(var.angle * M_PI / 180);
    var.tab[2] = 0;
    var.tab[3] = sin(var.angle * M_PI / 180);
    var.tab[4] = cos(var.angle * M_PI / 180);
    var.tab[5] = 0;
    var.tab[6] = 0;
    var.tab[7] = 0;
    var.tab[8] = 1;
    return (var);
}

var_rotate abso_zero_rotation(var_rotate var)
{
    if (var.tab[0] > -0.001 && var.tab[0] < 0)
        var.tab[0] = ABS(var.tab[0]);
    if (var.tab[1] > -0.001 && var.tab[1] < 0)
        var.tab[1] = ABS(var.tab[1]);
    if (var.tab[3] > -0.001 && var.tab[3] < 0)
        var.tab[3] = ABS(var.tab[3]);
    if (var.tab[4] > -0.001 && var.tab[4] < 0)
        var.tab[4] = ABS(var.tab[4]);
    return (var);
}

void rotate(int i, char **av, float *matrice_temp, base_matrice *base)
{
    var_rotate rotate;
    rotate.angle = atoi(av[i + 1]);
    base->tab[0] = atof(av[1]);
    base->tab[1] = atof(av[2]);
    base->tab[2] = 1;
    base->x = atof(av[1]);
    base->y = atof(av[2]);
    rotate = rotate_calc(rotate);
    rotate = abso_zero_rotation(rotate);

    if (base->display == 1)
        display_rotate(rotate);
    for (int i = 0; i < 9; i++)
        matrice_temp[i] = rotate.tab[i];
    return;
}