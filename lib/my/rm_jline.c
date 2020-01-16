/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** rm_jline
*/

#include "include/my.h"

void rm_jline(char *string)
{
    int n = 0;
    int i = 0;

    for (; string[i]; i++)
        if (string[i] != '\n')
            string[n++] = string[i];
    string[n] = '\0';
}