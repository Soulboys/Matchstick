/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../../include/my.h"

int my_tablen_line(char **tab)
{
    int g = 0;
    int s = 0;
    int len = 0;

    for (; tab[g]; g++) {
        for (int s = 0; s != my_strlentab(tab, g); s++) {
            if (tab[g][s] == '\n')
                len++;
        }
    }
    return (len);
}
