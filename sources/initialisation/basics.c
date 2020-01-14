/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** basics
*/

#include "main/main.h"

_Bool initialisation(main_t *shell, char **evrnmt, char **av)
{
    shell->evrnmt = evrnmt;
    shell->av = av;
    return (EXIT_SUCCESS);
}