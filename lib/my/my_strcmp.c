/*
** EPITECH PROJECT, 2018
** cmp
** File description:
** cmp
*/

#include "../../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    if (len1 != len2)
        return (0);
    for (int i = 0; s1[i]; i++) {
        if (s1[i] != s2[i]) {
            return(0);
        }
    }
    return (1);
}
