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

char **add_t(char **map, int nb_max, int size)
{
    int m = nb_max / 2;
    int j = 1, d = 0;

    for (int i = 1; i < size + 1; i++) {
        for (int f = 1; f < nb_max + 1; f++) {
            if (f > m && d < j) {
                map[i][f] = '|';
                d++;
            } else {
                map[i][f] = ' ';
            }
        }
        d = 0;
        m = m - 1;
        j += 2;
        map[i][nb_max + 1] = '*';
        map[i][0] = '*';
        map[i][nb_max + 2] = '\0';
    }
    return (map);
}

char **made_map(char **map, int size)
{
    int nb_st_line = 1;

    for (int i = 1; i < size; i++, nb_st_line += 2);
    map = malloc(sizeof(char*) * (size + 2));
    for (int i = 0; i < size + 2; i++)
        map[i] = malloc(sizeof(char) * (nb_st_line + 3));
    for (int i = 0; i < nb_st_line + 2; i++)
        map[0][i] = '*';
    map[0][nb_st_line + 2] = '\0';
    map = add_t(map, nb_st_line, size);
    for (int i = 0; i < nb_st_line + 2; i++) {
        map[size + 1][i] = '*';
    }
    map[size + 1][nb_st_line + 2] = '\0';
    return (map);
}

int display(int size, char **map)
{
    for (int i = 0; i < size + 2; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
    my_putchar('\n');
}
