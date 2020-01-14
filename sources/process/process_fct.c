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
        execve("/bin/my_ls", shell->word_command, __environ);
    else
        wait(NULL);
}

void exit_fct(main_t *shell)
{
    int i = 0;

    for (; shell->word_command[i]; ++i);
    if (!shell->word_command[1]) {
        my_printf("exit\nbash: exit: number argument necessary\n");
        return;
    }
    if (i >= 3 || is_str_nbr(shell->word_command[1]) == false) {
        my_printf("exit\nbash: exit: %s : number argument necessary\n", \
        shell->word_command[1]);
        return;
    }
    exit((my_atoi(shell->word_command[1])));
}

void clear_fct(main_t *shell)
{
    write(1, "\33[H\33[2J", 7);
}