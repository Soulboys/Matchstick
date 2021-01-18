/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_strcpy
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

char *my_strcpy(char const *src)
{
    int a = 0;
    char *dest = NULL;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    while (src[a]) {
        dest[a] = src[a];
        a++;
    }
    dest[a] = '\0';
    return (dest);
}
