/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** __DESCRIPTION__
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
