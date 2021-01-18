/*
** EPITECH PROJECT, 2018
** str dup
** File description:
** str dup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int j = 0;
    
    while (src[j] != '\0')
	j++;
    
    char *dest = malloc(sizeof(char) * j);
    for (int i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
    dest[j] = '\0';
    return (dest);
}
