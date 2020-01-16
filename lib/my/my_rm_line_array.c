/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_rm_line_array
*/

#include "include/my.h"

void my_rm_line_array(char **array, size_t line)
{
    int i = 0, n = 0;

    for (; array[i]; ++i, ++n) {
        if (i == line)
            ++i;
        array[n] = array[i];
    }
    array[n] = NULL;
}