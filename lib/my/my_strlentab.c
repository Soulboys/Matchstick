/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../../include/my.h"

int my_strlentab(char **tab, int j)
{
    int i = 0;

    for (; tab[j][i] != '\n'; i++);
    return (i);
}
