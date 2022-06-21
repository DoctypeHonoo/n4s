/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** edit_list
*/

#include "../../include/my.h"

int my_strcmp(const char *str1, const char *str2)
{
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

float lidar_value(list_t *list, int nb)
{
    list_t *temp = list;

    for (; temp && nb != temp->data; temp = temp->next) {
        if (temp->next->data == nb) {
            return atof(temp->next->value);
        }
    }
}

list_t *find_list(buff_t *buff, char *name)
{
    list_t *temp = buff->list_stats;

    for (; temp && my_strcmp(temp->name, name) != 0; temp = temp->next);
    return temp;
}
