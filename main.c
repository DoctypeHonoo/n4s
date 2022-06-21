/*
** EPITECH PROJECT, 2022
** n4s_package
** File description:
** main
*/

#include "include/my.h"

char **parse_lidar(char *lidar)
{
    char *temp = my_strdup(lidar);
    temp = crop_str(lidar, set[4], set[5]);
    char **buf = parsing_path(temp);
    return buf;
}

buff_t init_buff(void)
{
    buff_t buff = {0};
    return buff;
}

char *general_drifting(buff_t *buff)
{
    char *dir = NULL;
    int id = 0;

    if (drifting(buff, dir, id) != NULL)
        return drifting(buff, dir, id);
    if (drifting_2(buff, dir, id) != NULL)
        return drifting_2(buff, dir, id);
    if (drifting_3(buff, dir, id) != NULL)
        return drifting_3(buff, dir, id);
    if (drifting_4(buff, dir, id) != NULL)
        return drifting_4(buff, dir, id);
    if (drifting_5(buff, dir, id) != NULL)
        return drifting_5(buff, dir, id);
    return dir = my_strdup(my_strcat(set[6], "0.0\n"));
}

int main(void)
{
    buff_t buff = init_buff();

    exec_and_print(&buff, set[0]);
    exec_and_print(&buff, set[1]);

    while (1) {
        exec_and_print_lidar(&buff, set[2]);
        exec_and_print(&buff, general_drifting(&buff));

    }
    exec_and_print(&buff, set[3]);

    return 0;
}
