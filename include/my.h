/*
** EPITECH PROJECT, 2018
** include
** File description:
** create an include
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int matchstick(char **argv);
int my_strcmp(char *s1, char *s2);
int begin_game(char **map, int nbr_max, int size);
char **remove_st(char **map, int line, int st, int turn);
int add_stick(char **map, int nbr_max, int size, int line);
int stick_test(int line , char **map, int nbr_max, int st);
int count_stick(char **map, int size, int nbr_max);
int add_line(char **map, int nbr_max, int size);
int line_test(int line, char **map, int size);
int me_nim(char **map, int size);
int *count_ia_stick(char **map, int size, int *max);
int counnt_st_line(char **map, int line);
int ia_remove(int nim, char **map, int *max, int size);
int ia_play(char **map, int nbr_max, int size);
int display(int size, char **map);
char **made_map(char **map, int size);
char **add_t(char **map, int nb_max, int size);
int display(int size, char **map);
char **made_map(char **map, int size);
char **add_t(char **map, int nb_max, int size);
int add_line(char **map, int nbr_max, int size);
int matchstick(char **argv);
int add_stick(char **map, int nbr_max, int size, int line);
int begin_game(char **map, int nbr_max, int size);
void my_putchar(char c);
int my_putstr(char const *str);
void my_swap(int *a, int *b);
char *my_revstr(char *str);
char *my_strcpy(char const *src);
int my_strlen(char const *str);
int my_strlen2(char const *str, int i);
int my_getnbr(char *str);
char *my_strdup(char const *src);
int main(int argc, char **argv);
char **strtotab(char *str, int *f);
int my_strlen3(char *str);
int my_strlentab(char **tab, int j);
int my_tablen_line(char **tab);
void my_put_nbr(int nb);
