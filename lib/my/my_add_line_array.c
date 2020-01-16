/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_add_line_array
*/

#include "include/my.h"

void my_add_line_array(char **array, char *string)
{
    size_t size = 0;

    for (; array[size]; ++size);
    array[size] = my_strdup(my_strcat(string, "\0"));
    array[size + 1] = NULL;
}