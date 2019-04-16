/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** 102architect
*/
#include "include/struct_lib.h"

void rotate(int i, char **av, float *matrice_temp, base_matrice *base);
void scaling(int i, char **av, float *matrice_temp, base_matrice *base);
void reflection(int i, char **av, float *matrice_temp, base_matrice *base);
void translation(int i, char **av, float *matrice_temp, base_matrice *base);

void display(operator *op_tab, int nb_op, char **av, base_matrice *base)
{
    int i = 0;

    while (i < nb_op) {
        if (op_tab[i].op == 't')
            translation(op_tab[i].index, av, base->matrice_temp, base);
        if (op_tab[i].op == 'z')
            scaling(op_tab[i].index, av, base->matrice_temp, base);
        if (op_tab[i].op == 'r')
            rotate(op_tab[i].index, av, base->matrice_temp, base);
        if (op_tab[i].op == 's')
            reflection(op_tab[i].index, av, base->matrice_temp, base);
        i++;
    }
    return;
}

void calcul(operator *op_tab, int nb_op, char **av, base_matrice *base)
{
    if (op_tab[nb_op - 1].op == 't')
        translation(op_tab[nb_op - 1].index, av, base->matrice_temp, base);
    if (op_tab[nb_op - 1].op == 'z')
        scaling(op_tab[nb_op - 1].index, av, base->matrice_temp, base);
    if (op_tab[nb_op - 1].op == 'r')
        rotate(op_tab[nb_op - 1].index, av, base->matrice_temp, base);
    if (op_tab[nb_op - 1].op == 's')
        reflection(op_tab[nb_op - 1].index, av, base->matrice_temp, base);
    return;
}

void distrib(operator *op_tab, int nb_op, char **av)
{
    float matrice_final[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    float result[9]= {0, 0, 0, 0, 0, 0, 0, 0, 0};
    float newtab_2d[3] = {0, 0, 1};
    int nb_op_temp = nb_op;
    base_matrice base;
    base.display = 0;
    base.matrice_temp;

    while (nb_op > 0) {
        calcul(op_tab, nb_op, av, &base);
        nb_op--;
        matrix_3_to_3(matrice_final, base.matrice_temp, result);
        for (int j = 0; j < 9; j++)
            matrice_final[j] = result[j];
    }
    base.display = 1;
    display(op_tab, nb_op_temp, av, &base);
    display_matrice(matrice_final);
    matrix_3_to_1(matrice_final, base.tab, newtab_2d);
    display_result(newtab_2d, &base);
}