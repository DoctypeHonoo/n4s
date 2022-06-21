/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** lidar_manager
*/

#include "../../include/my.h"

void calc_sides(buff_t *buff)
{
    list_t *list = buff->list_stats;
    float left = 0;
    float mid = 0;
    float right = 0;

    for (; list && list->data < 32; list = list->next) {
        if (list->data < 4 && list->data > -1)
            left += atof(list->value);
        if (list->data > 12 && list->data < 17)
            mid += atof(list->value);
        if (list->data > 27 && list->data < 32)
            right += atof(list->value);
    }
    buff->axes.left_values = left;
    buff->axes.mid_values = mid;
    buff->axes.right_values = right;
}

void exec_and_print_lidar(buff_t *buff, const char *set)
{
    int len = my_strlen(set);

    write(1, set, len);
    write(2, set, len);
    my_getline(buff);
    buff->tab = parse_lidar(buff->line);
    set_lidar(buff);
    calc_sides(buff);
    print_lidar(*buff);
}
