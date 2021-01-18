/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../../include/my.h"
#include <stdlib.h>

int my_strlen3(char *str)
{
    int k = 0;
    int m = 0;

    for (; str[k]; k++) {
        if (str[k] == '\n')
            m++;
    }
    return (m);
}

char **strtotab(char *str, int *f)
{
    int i = 0;
    int g = 0;
    int j = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char*) * my_strlen3(str));
    tab[j] = malloc(sizeof(char) * my_strlen2(str, i));
    for (; str[i] != '\0'; i++, g++) {
        if (str[i - 1] == '\n' && str[i] != '\0') {
            j++;
            tab[j] = malloc(sizeof(char) * my_strlen2(str, i));
            g = 0;
        }
        tab[j][g] = str[i];
    }
    *f = j + 1;
    free(str);
    return (tab);
}
