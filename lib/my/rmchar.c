/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_str_rm
*/

#include "include/my.h"

static _Bool check_flag(char **flag, char character)
{
    for (int i = 0; flag[i]; ++i)
        if (flag[i][0] == character)
            return (false);
    return (true);
}

char *rmchar(char *string, char **__DELETE)
{
    char *save = malloc(my_strlen(string));
    unsigned i = 0;
    unsigned n = 0;

    for (; string[i]; ++i, ++n) {
        if (check_flag(__DELETE, string[i]) == false)
            ++i;
        save[n] = string[i];
    }
    save[n] = '\0';
    return (save);
}