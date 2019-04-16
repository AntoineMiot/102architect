/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** 102_display
*/
#include <stdio.h>
#include "include/struct_lib.h"

void display_result(float *result, base_matrice *base)
{
    printf("(%.0f, %.0f) => ", base->x, base->y);
    printf("(%.2f, %.2f)\n", result[0], result[1]);
}

void display_matrice(float *tab)
{
    printf("%.2f	%.2f	%.2f\n", tab[0],
    tab[1], tab[2]);
    printf("%.2f	%.2f	%.2f\n", tab[3],
    tab[4], tab[5]);
    printf("%.2f	%.2f	%.2f\n", tab[6],
    tab[7], tab[8]);
}