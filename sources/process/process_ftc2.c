/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** process_ftc2
*/

#include "main/main.h"

void setenv_fct(main_t *shell)
{
    size_t size = 0;

    if (!av[1] || !av[2] || ac != 3) {
        my_putstrc("setenv\nminishell: setenv: variable and value necessary\n",
        RED, true);
        return;
    }
    for (; shell->evrnmt[size]; ++size);
    shell->evrnmt[size] = my_strdup(my_strcat(my_strcat(av[1], "="), av[2]));
    shell->evrnmt[size + 1] = NULL;
}

void unsetenv_fct(main_t *shell)
{
    if (!av[1] || ac != 2) {
        my_putstrc("unsetenv\nminishell: unsetenv: variable name necessary\n",
        RED, true);
        return;
    }
    for (int i = 0; shell->evrnmt[i]; ++i)
        if (my_strcmp(av[1], shell->evrnmt[i]) == true) {
            my_rm_line_array(shell->evrnmt, i);
            my_putstrc("variable remove successfully\n", GREEN, true);
            return;
        }
    my_putstrc("unsetenv\nminishell: unsetenv: variable name not found\n",
    RED, true);
}