/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include "main/main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int main(int ac, char **av, char **evrnmt)
{
    main_t *shell = malloc(sizeof(main_t));

    shell_loop(shell);
}