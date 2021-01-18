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

char **remove_st(char **map, int line, int st, int turn)
{
    int i = 0;

    for (; map[line][i]; i++);
    for (; map[line][i] != '|'; i--);
    for (int j = 0; j < st; i--, j++)
        map[line][i] = ' ';
    if (turn == 1) {
        my_putstr("Player removed ");
        my_put_nbr(st);
        my_putstr(" match(es) from line ");
        my_put_nbr(line);
        my_putchar('\n');
    } else if (turn == 0) {
        my_putstr("AI removed ");
        my_put_nbr(st);
        my_putstr(" match(es) from line ");
        my_put_nbr(line);
        my_putchar('\n');
    }
    return (map);
}

int begin_game(char **map, int nbr_max, int size)
{
    int st = 0;
    int line = 0;

    my_putstr("Your turn:\n");
    while (line == 0)
        line = add_line(map, nbr_max, size);
    while (st == 0 || line == 0) {
        if (line == 0)
            line = add_line(map, nbr_max, size);
        st = add_stick(map, nbr_max, size, line);
        if (st == 0)
            line = add_line(map, nbr_max, size);
    }
    map = remove_st(map, line, st, 1);
    if (count_stick(map, size, nbr_max) == 0)
        return (2);
}

int matchstick(char **argv)
{
    char **map;
    int nb_st = 0;
    int the_game = 0;
    int size = my_getnbr(argv[1]);
    int nbr_max = my_getnbr(argv[2]);

    if (size == 0 || size > 100 || nbr_max == 0)
        return (84);
    map = made_map(map, size);
    nb_st = count_stick(map, size, nbr_max);
    display(size, map);
    while (nb_st != 0) {
        nb_st = count_stick(map, size, nbr_max);
        if (nb_st != 0) {
            the_game = begin_game(map, nbr_max, size);
            display(size, map);
            if (the_game == 2)
                return (2);
            the_game = ia_play(map, nbr_max, size);
            display(size, map);
            if (the_game == 1)
                return (1);
        }
    }
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 3)
        i = matchstick(argv);
    else
        my_putstr("invalid number\n");
    if (i == 84)
        my_putstr("Bad number\n");
    if (i == 2) {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    if (i == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
}
