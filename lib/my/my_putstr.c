/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
    return (0);
}
