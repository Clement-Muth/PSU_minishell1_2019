/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_str_nbr
*/

#include "include/my.h"

_Bool is_str_nbr(char *string)
{
    for (int i = 0; string[i]; ++i)
        if (is_alphanum(string[i]) == false)
            return (false);
    return (true);
}