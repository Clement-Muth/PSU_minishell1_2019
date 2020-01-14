/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct
{
    size_t size;
    char *command;
    char *path;
    char **word_command;
    char **evrnmt;
    char **av;
} main_t;

#endif /* !STRUCT_H_int */