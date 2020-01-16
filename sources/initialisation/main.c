/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include "main/main.h"

int main(void)
{
    main_t *shell = my_memalloc(sizeof(main_t));

    shell->evrnmt = __environ;
    shell_loop(shell);
    free(shell);
    return (EXIT_SUCCESS);
}