/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_modify_line_array
*/

#include "include/my.h"

void my_modif_line_array(char **array, char *string, size_t line)
{
    array[line] = malloc(my_strlen(string) + 1);
    array[line] = my_strdup(my_strcat(string, "\0"));
}