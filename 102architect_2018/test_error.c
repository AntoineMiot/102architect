/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** error
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "include/struct_lib.h"

int my_isoperator(char **str, int i);

int my_isnum(char *str)
{
    int i = 0;

    while (str[i] == '-' || (str[i] <= 57 && str[i] >= 48))
        i++;
    if (i == my_strlen(str))
        return (1);
    return (0);
}

void valid_operator(int ac, char **av)
{
    int valid_operator = 1;

    for (int i = 1; i < ac; i++) {
        if (my_isoperator(av, i) == 1)
            valid_operator++;
        if (my_isnum(av[i]) == 1)
            valid_operator++;
    }
    if (valid_operator != ac) {
        printf("Invalid arguments, please read the description");
        printf(" with ./102architect -h\n");
        exit(84);
    }
    return;
}

void nb_arg(int ac, char **av)
{
    int nb_arg = 3;

    for (int i = 0; i < ac; i++) {
        if (av[i][1] == 't')
            nb_arg += 3;
        if (av[i][1] == 'z')
            nb_arg += 3;
        if (av[i][1] == 's')
            nb_arg += 2;
        if (av[i][1] == 'r')
            nb_arg += 2;
    }
    if (nb_arg != ac || ac < 5) {
        printf("Invalid arguments, please read the description");
        printf(" with ./102architect -h\n");
        exit(84);
    }
    return;
}

void description(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        printf("USAGE\n./102architect x y transfo1 arg11 [arg12]");
        printf(" [transfo2 arg12 [arg22]] ...\n");
        printf("DESCRIPTION\n	x	abscissa of the original point\n");
        printf("	y	ordinate of the original point\n\n");
        printf("	transfo arg1 [arg2]\n");
        printf("	-t i j	translation along vector (i, j)\n");
        printf("	-z m n	scaling by factors m (x-axis) ");
        printf("and n (y-axis)\n");
        printf("	-r d	rotation centered in O by a d degree angle\n");
        printf("	-s d	reflection over the axis passing ");
        printf("through O with ");
        printf("an inclination angle of d degrees\n");
        exit(0);
    }
    return;
}

void error_test(int ac, char **av)
{
    if (ac == 1) {
        printf("No Argument, please read the description");
        printf(" with ./102architect -h\n");
        exit(84);
    }
    description(ac, av);
    nb_arg(ac, av);
    valid_operator(ac, av);
    return;
}