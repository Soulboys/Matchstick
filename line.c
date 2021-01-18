/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** __DESCRIPTION__
*/


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int line_test(int line, char **map, int size)
{
    int st = 0;

    if (line > size) {
        my_putstr("Error: this line is out of range\n");
        return (0);
    }
    if (line <= 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    for (int i = 0; map[line][i]; i++)
        if (map[line][i] == '|')
            st++;
    if (st == 0)
        my_putstr("Error: not enough matches on this line\n");
    return (st);
}

int add_line(char **map, int nbr_max, int size)
{
    char *lines = NULL;
    size_t len = 0;
    int line = 0;

    my_putstr("Line: ");
    getline(&lines, &len, stdin);
    if (my_strcmp(lines, "\0") == 1)
        exit(0);
    line = my_getnbr(lines);
    if (line_test(line, map, size) == 0) {
        return (0);
    }
    return (line);
}

int count_stick(char **map, int size, int nbr_max)
{
    int nb_st = 0;

    for (int i = 1; i <= size; i++)
        for (int j = 0; map[i][j]; j++)
            if (map[i][j] == '|')
                nb_st++;
    return (nb_st);
}

int stick_test(int line , char **map, int nbr_max, int st)
{
    int nb_st = 0;

    if (st > nbr_max) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(nbr_max);
        my_putstr(" matches per turn\n");
        return (0);
    }
    if (st <= 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (0);
    }
    for (int i = 0; map[line][i]; i++)
        if (map[line][i] == '|')
            nb_st++;
    if (nb_st < st) {
        my_putstr("Error: not enough matches on this line\n");
        return (0);
    } else
        return (1);
}

int add_stick(char **map, int nbr_max, int size, int line)
{
    char *matches = NULL;
    size_t leng = 0;
    int st = 0;

    my_putstr("Matches: ");
    getline(&matches, &leng, stdin);
    st = my_getnbr(matches);
    if (stick_test(line, map, nbr_max, st) == 0) {
        return (0);
    }
    return (st);
}
