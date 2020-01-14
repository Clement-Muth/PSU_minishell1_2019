/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strcmp
*/

#include "include/my.h"

_Bool my_strcmp(const char *compared, const char *comparing)
{
    while (*compared++ == *comparing++ && *compared && *comparing);
    return (*compared == 0) ? (true) : (false);
}