/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** exec
*/

#include "../../include/my.h"

void exec_and_print(buff_t *buff, const char *set)
{
    int len = my_strlen(set);
    write(1, set, len);
    write(2, set, len);
    my_getline(buff);
    write(2, "\n", 1);
}
