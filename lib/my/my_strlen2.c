/*
** EPITECH PROJECT, 2018
** strlen.c
** File description:
** strlen
*/

#include "../../include/my.h"

int my_strlen2(char const *str, int i)
{
    int n = 0;

    for (;str[i] != '\n'; i++)
        n++;
    return (n);
}
