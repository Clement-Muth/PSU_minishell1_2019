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

void shell_loop(main_t *shell)
{
    shell->command = NULL;
    shell->size = 0;

    display_prompt(shell);
    getline(&shell->command, &shell->size, stdin);
    my_str_to_word_array(shell->command);
    free_fct(shell->command, shell->word_command);
    shell_loop(shell);
}