/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** 102architect
*/
#include <stdio.h>
#include "include/struct_lib.h"

void display_translation(var_trans trans)
{
    printf("Translation along vector (%.0f, %.0f)\n", trans.a, trans.b);
}

void display_reflection(var_reflection reflect)
{
    printf("Reflection over an");
    printf(" axis with an inclination angle of %.0f degrees\n",
    reflect.angle);
}

void display_rotate(var_rotate var)
{
    printf("Rotation by a %.0f degree angle\n", var.angle);
}

void display_scale(var_scale scale)
{
    printf("Scaling by factors %.0f and %.0f\n", scale.a, scale.b);
}