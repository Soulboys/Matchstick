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

int me_nim(char **map, int size)
{
    int nb = 0;
    int st = 0;
    int nim = 0;

    for (int i = 0; i <= size; i++) {
        st = 0;
        for (int j = 0; map[i][j]; j++)
            if (map[i][j] == '|')
                st++;
        nim = nim ^ st;
    }
    return (nim);
}

int *count_ia_stick(char **map, int size, int *max)
{
    int sticks = 0;

    max[1] = 0;
    max[2] = 0;
    for (int d = 0; size >= d; d++) {
        for (int i = 0; map[d][i]; i++)
            if (map[d][i] == '|')
                sticks++;
        if (max[2] < sticks) {
            max[1] = d;
            max[2] = sticks;
        }
        sticks = 0;
    }
    return (max);
}

int counnt_st_line(char **map, int line)
{
    int sticks = 0;

    for (int i = 0; map[line][i]; i++)
        if (map[line][i] == '|')
            sticks++;
    return (sticks);
}

int ia_remove(int nim, char **map, int *max, int size)
{
    int nb_st = 0;

    if (nim > max[0] && counnt_st_line(map, max[1]) > max[0]) {
        remove_st(map, max[1], max[0] , 0);
        return (1);
    } else if (counnt_st_line(map, max[1]) < max[0]) {
        remove_st(map, max[1], 1, 0);
        return (1);
    } else {
        remove_st(map, max[1], nim, 0);
        return (1);
    }
}

int ia_play(char **map, int nbr_max, int size)
{
    int *max;
    int nim;

    max = malloc(sizeof(int) * 3);
    max[0] = nbr_max;
    my_putstr("AI's turn...\n");
    max = count_ia_stick(map, size, max);
    nim = me_nim(map, size);
    if (nim == 0) {
        remove_st(map, max[1], nbr_max, 0);
    } else {
        ia_remove(nim, map, max, size);
    }
    free(max);
    if (count_stick(map, size, nbr_max) == 0)
        return (1);
}
