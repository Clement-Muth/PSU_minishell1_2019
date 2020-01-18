/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** shell_loop
*/

#include "main/main.h"

static void free_fct(main_t *shell)
{
    free(av);
    free(shell->command);
}

void (*process_fct[])(main_t *) = {
    cd_fct,
    exit_fct,
    clear_fct,
    setenv_fct,
    unsetenv_fct,
    display_env
};

static void parsing_process(main_t *shell)
{
    int i = 0;
    char *opt[] = {"cd", "exit", "cl", "setenv", "unsetenv",
    "env", NULL};

    rm_jline(shell->command);
    av = my_str_to_word_array(shell->command, " ");
    while (av[++i]);
    ac = i;
    for (int i = 0; opt[i] && av[0]; ++i)
        if (my_strcmp(opt[i], av[0]) == true)
            process_fct[i](shell);
}

static void my_execve(main_t *shell)
{
    pid_t id = fork();

    if (-1 == id) {
        free(shell);
        exit(EXIT_ERROR);
    } else if (0 == id)
        execve(my_strcat("/bin/", av[0]), av, __environ);
    else
        wait(NULL);
}

void shell_loop(main_t *shell)
{
    while (1) {
        initialisation(shell);
        display_prompt(shell);
        getline(&shell->command, &shell->size, stdin);
        parsing_process(shell);
        my_execve(shell);
        free_fct(shell);
    }
}
