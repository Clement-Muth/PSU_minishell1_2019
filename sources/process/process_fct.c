/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** process_fct
*/

#include "main/main.h"

void cd_fct(main_t *shell)
{
    // chdir(av[1]);
}

void exit_fct(main_t *shell)
{
    if (av[1] && ac == 2 && is_str_nbr(av[1]) == true)
        exit((my_atoi(av[1])));
    write(1, "exit\nbash: exit: number argument necessary\n", 10);
}

void clear_fct(main_t *shell)
{
    write(1, "\33[H\33[2J", 7);
}