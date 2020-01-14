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

static void (*process_fct[])(main_t *) = {
    cd_fct,
    ls_fct,
    exit_fct,
    clear_fct
};

void shell_loop(main_t *shell)
{
    char *opt[] = {"cd", "my_ls", "exit", "clear", NULL};
    shell->command = NULL;
    shell->size = 0;

    display_prompt(shell);
    getline(&shell->command, &shell->size, stdin);
    shell->command = my_stresize(shell->command, -1, my_strlen(shell->command)
    - 2);
    shell->word_command = my_str_to_word_array(shell->command, " ");
    for (int i = 0; opt[i]; ++i)
        if (my_strcmp(opt[i], shell->word_command[0]) == true)
            process_fct[i](shell);
    free_fct(shell->command, shell->word_command);
    shell_loop(shell);
}