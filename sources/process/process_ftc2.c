/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** process_ftc2
*/

#include "main/main.h"

static char **my_setenv(main_t *shell, char **env)
{
    size_t size = 0;

    for (; env[size]; ++size);
    env[size] = my_strdup(my_strcat(my_strcat(av[1], "="), av[2]));
    env[size + 1] = NULL;
}

void setenv_fct(main_t *shell)
{
    for (int i = 0; shell->evrnmt[i]; ++i);
    my_setenv(shell, shell->evrnmt);
}

void unsetenv_fct(main_t *shell)
{

}