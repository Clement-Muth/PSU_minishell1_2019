/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** shell_loop
*/

#include "main/main.h"

static void free_fct(char *string, char **string2)
{
    free(string);
    free(string2);
}

static void if_forst(main_t *shell)
{
    int i = 0;

    if (shell->word_command[1] && my_strcmp(shell->word_command[0], "cd") == 0)
        cd_fct(shell);
    if (shell->word_command[1] && my_strcmp(shell->word_command[0], "my_ls") ==
    0)
        ls_fct(shell);
    if (shell->word_command[1] && my_strcmp(shell->word_command[0], "exit") ==
    0)
        for (; shell->word_command[i]; ++i);
        if (i >= 3 || !is_alphanum(my_atoi(shell->word_command[1]))) {
            my_printf("exit: Expression Synthax\n");
            return;
        }
        exit((my_atoi(shell->word_command[1])));
}

void shell_loop(main_t *shell)
{
    shell->command = NULL;
    shell->size = 0;

    display_prompt(shell);
    getline(&shell->command, &shell->size, stdin);
    shell->word_command = my_str_to_word_array(shell->command);
    if_forst(shell);
    free_fct(shell->command, shell->word_command);
    shell_loop(shell);
}