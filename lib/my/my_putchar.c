/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** use for write
*/

#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
