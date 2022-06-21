/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** set_lidar
*/

#include "../../include/my.h"

char *crop_str(char *src, const char *start, const char *end)
{
    int start_len = my_strlen(start);
    int end_len = my_strlen(end);
    char *temp = my_strdup(src);

    src = my_strdup(temp + start_len);
    src = my_strndup(src, my_strlen(src) - end_len);

    return src;
}

void create_node_at_back(list_t **lidar, char *str, int nb)
{
    list_t *node = malloc(sizeof(list_t));
    list_t *list = *lidar;

    node->name = my_strdup(my_itoa(nb));
    node->data = nb;
    node->value = my_strdup(str);
    node->next = NULL;

    if (list) {
        while (list->next)
            list = list->next;
        list->next = node;
    } else
        *lidar = node;
}

void set_lidar(buff_t *buff)
{
    list_t *tab = NULL;

    for (int i = 0; buff->tab[i]; i++) {
        create_node_at_back(&tab, buff->tab[i], i);
    }
    buff->list_stats = tab;
}

void print_lidar(buff_t buff)
{
    write(2, "\n", 2);
    write(2, "[LIDAR_INFO]", 12);
    write(2, "\n", 2);
    for (; buff.list_stats; buff.list_stats = buff.list_stats->next) {
        write(2, "[", 1);
        write(2, buff.list_stats->name, my_strlen(buff.list_stats->name));
        write(2, "]", 1);
        write(2, " = ", 1);
        write(2, "[", 1);
        write(2, buff.list_stats->value, my_strlen(buff.list_stats->value));
        write(2, "]", 1);
        write(2, "\n", 1);
    }
}
