/*
** EPITECH PROJECT, 2018
** revstr
** File description:
** revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    char c;

    i = my_strlen(str);
    for (int j = 0; j < i - 1; j++) {
        c = str[j];
        str[j] = str[i - 1];
        str[i - 1] = c;
        i--;
    }
    return (str);
}
