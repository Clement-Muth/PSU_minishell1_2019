/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** process_fct
*/

#include "main/main.h"

void cd_fct(main_t *shell)
{
    chdir(shell->word_command[1]);
}

void ls_fct(main_t *shell)
{
    pid_t id = fork();

    if (-1 == id) {
        free(shell);
        exit(EXIT_ERROR);
    } else if (0 == id)
        execve("/bin/my_ls", shell->av, __environ);
    else
        wait(NULL);
}