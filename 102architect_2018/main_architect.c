/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** main fonction
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"

void distrib(operator *op_tab, int nb_op, char **av);
int error_test(int ac, char **av);

int my_isoperator(char **str, int i)
{
    char *ope_list = "trzs";

    if (my_strlen(str[i]) != 2)
        return (0);
    if (str[i][0] != '-')
        return (0);
    for (int j = 0; j < 4; j++) {
        if (str[i][1] == ope_list[j])
            return (1);
    }
    return (0);
}

void parser(int ac, char **av, int nb_op)
{
    int index_op = 0;
    operator tab_op[nb_op];

    for (int i = 1; i < ac; i++) {
        if (my_isoperator(av, i) == 1) {
            tab_op[index_op].op = av[i][1];
            tab_op[index_op].index = i;
            index_op++;
        }
    }
    distrib(tab_op, nb_op, av);
}

int nb_operator(int ac, char **av)
{
    int nb_op = 0;

    for (int i = 1; i < ac; i++) {
        if (my_isoperator(av, i) == 1)
            nb_op++;
    }
    return (nb_op);
}

int main(int ac, char **av)
{
    int nb_op;

    error_test(ac, av);
    nb_op = nb_operator(ac, av);
    parser(ac, av, nb_op);
    return (0);
}
