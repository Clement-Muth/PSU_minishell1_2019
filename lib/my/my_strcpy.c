/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Debian]
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src[i]; ++i) {
        if (src[i] == '\n')
            i++;
        dest[i] = src[i];
    }
    return (dest);
}