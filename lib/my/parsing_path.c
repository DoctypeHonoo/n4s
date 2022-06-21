/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** parsing_path
*/

#include "../../include/my.h"

int count_parse(char *str, char obj)
{
    int nb = 0;
    for (; *str; *str++)
        if (*str == obj)
            nb++;
    return nb + 1;
}

void split_path(char ***tab, char *path, int y, int j)
{
    for (int i = 0; path[i]; i++) {
        if (path[i] == ':') {
            (*tab)[y][j] = '\0';
            j = 0;
            y += 1;
            continue;
        }
        (*tab)[y][j] = path[i];
        j += 1;
    }
    (*tab)[y][j] = '\0';
    (*tab)[y + 1] = '\0';
}

char **parsing_path(char *path)
{
    int nb = count_parse(path, ':') + 1;
    char **tab = malloc(nb * sizeof(char *));
    for (int n = 0; n < nb; n++)
        tab[n] = malloc(sizeof(char) * my_strlen(path));
    split_path(&tab, path, 0, 0);
    return tab;
}
