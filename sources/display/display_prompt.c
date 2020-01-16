/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** display_prompt
*/

#include "main/main.h"

static char *path(char *string)
{
    int n = 0;
    int i = 0;
    int k = 0;
    char *result = malloc(sizeof(char) * my_strlen(string));

    for (; string[i]; ++i) {
        if ('/' == string[i])
            ++n;
        if (n == 3)
            break;
    }
    if (n > 2) {
        for (int j = i; string[j]; ++j, ++k)
            result[k] = string[j];
        result[k] = '\0';
        return (result = my_strcat("~", result));
    }
    return (string);
}

void display_prompt(main_t *shell)
{
    my_putstrc(my_strcat(my_strcat(getenv("USERNAME"), "@"), getenv("HOST")),
    GREEN, true);
    my_putchar(':');
    my_putstrc(path(getcwd(NULL, (size_t)500)), BLUE, true);
    my_putstrb("$");

}

void display_env(main_t *shell)
{
    for (int i = 0; shell->evrnmt[i]; ++i)
        my_putstrl(shell->evrnmt[i]);
}