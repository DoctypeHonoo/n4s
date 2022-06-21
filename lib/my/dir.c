/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** dir
*/

#include "../../include/my.h"

static char *set1[] = {
    "WHEELS_DIR:",
    "CAR_FORWARD:",
};

int check_mod(buff_t *buff)
{
    if ((buff->axes.left_values > buff->axes.right_values)
    && (buff->axes.left_values / 4 > 300
    && (buff->axes.right_values / 4 > 300)))
        return SPORT_LEFT;

    if ((buff->axes.right_values > buff->axes.left_values)
    && (buff->axes.left_values / 4 > 300
    && (buff->axes.right_values / 4 > 300)))
        return SPORT_RIGHT;

    if (buff->axes.left_values > buff->axes.right_values &&
    (buff->axes.mid_values / 4 < 2000))
        return BOOMER_LEFT;

    if (buff->axes.right_values > buff->axes.left_values &&
    (buff->axes.mid_values / 4 < 2000))
        return BOOMER_RIGHT;
}

char *mod_sport_left(buff_t *buff)
{
    char *dir;

    if (buff->axes.mid_values / 4 > 2100) {
        exec_and_print(buff, my_strcat(set1[1], "0.9\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.01\n"));
    }
    if (buff->axes.mid_values / 4 > 1800) {
        exec_and_print(buff, my_strcat(set1[1], "0.8\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.01\n"));
    }
    if (buff->axes.mid_values / 4 > 1500) {
        exec_and_print(buff, my_strcat(set1[1], "0.7\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.01\n"));
    }
    return NULL;
}

char *mod_sport_right(buff_t *buff)
{
    char *dir;

    if (buff->axes.mid_values / 4 > 2100) {
        exec_and_print(buff, my_strcat(set1[1], "0.9\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.1\n"));
    }
    if (buff->axes.mid_values / 4 > 1800) {
        exec_and_print(buff, my_strcat(set1[1], "0.8\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.1\n"));
    }
    if (buff->axes.mid_values / 4 > 1500) {
        exec_and_print(buff, my_strcat(set1[1], "0.7\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.1\n"));
    }
    return NULL;
}

char *mod_boomer_left(buff_t *buff)
{
    char *dir;

    if (buff->axes.right_values / 4 < 350 &&
    (buff->axes.left_values / 4 > 350)) {
        exec_and_print(buff, my_strcat(set1[1], "0.2\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.3\n"));
    }
    if (buff->axes.right_values / 4 < 400 &&
    (buff->axes.left_values / 4 > 300)) {
        exec_and_print(buff, my_strcat(set1[1], "0.4\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.2\n"));
    }
    if (buff->axes.right_values / 4 < 500 &&
    (buff->axes.left_values / 4 > 200)) {
        exec_and_print(buff, my_strcat(set1[1], "0.5\n"));
        return dir = my_strdup(my_strcat(set1[0], "0.1\n"));
    }
    return NULL;
}

char *mod_boomer_right(buff_t *buff)
{
    char *dir;

    if (buff->axes.left_values / 4 < 350 &&
    (buff->axes.right_values / 4 > 350)) {
        exec_and_print(buff, my_strcat(set1[1], "0.2\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.3\n"));
    }
    if (buff->axes.left_values / 4 < 400 &&
    (buff->axes.right_values / 4 > 300)) {
        exec_and_print(buff, my_strcat(set1[1], "0.4\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.2\n"));
    }
    if (buff->axes.left_values / 4 < 500 &&
    (buff->axes.right_values / 4 > 200)) {
        exec_and_print(buff, my_strcat(set1[1], "0.5\n"));
        return dir = my_strdup(my_strcat(set1[0], "-0.1\n"));
    }
    return NULL;
}
