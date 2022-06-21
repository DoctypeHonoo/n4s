/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** drifting
*/

#include "../../include/my.h"

char *drifting_5(buff_t *buff, char *dir, int id)
{
    if (boomer_right(buff)) {
        if (buff->axes.left_values / 4 < BOOMER_1_3) {
            exec_and_print(buff, my_strcat(set[7], "0.25\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.25\n"));
        }
        if (buff->axes.left_values / 4 < BOOMER_2_3 &&
        (buff->axes.right_values / 4 > 300)) {
            exec_and_print(buff, my_strcat(set[7], "0.3\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.18\n"));
        }
        if (buff->axes.left_values / 4 < BOOMER_4 &&
        (buff->axes.right_values / 4 > 250)) {
            exec_and_print(buff, my_strcat(set[7], "0.5\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.08\n"));
        }
    }
    return NULL;
}

char *drifting_4(buff_t *buff, char *dir, int id)
{
    if (boomer_left(buff)) {
        if (buff->axes.right_values / 4 < BOOMER_1_3) {
            exec_and_print(buff, my_strcat(set[7], "0.25\n"));
            return dir = my_strdup(my_strcat(set[6], "0.25\n"));
        }
        if (buff->axes.right_values / 4 < BOOMER_2_3 &&
        (buff->axes.left_values / 4 > 300)) {
            exec_and_print(buff, my_strcat(set[7], "0.3\n"));
            return dir = my_strdup(my_strcat(set[6], "0.18\n"));
        }
        if (buff->axes.right_values / 4 < BOOMER_4 &&
        (buff->axes.left_values / 4 > 250)) {
            exec_and_print(buff, my_strcat(set[7], "0.5\n"));
            return dir = my_strdup(my_strcat(set[6], "0.08\n"));
        }
    }
    return NULL;
}

char *drifting_3(buff_t *buff, char *dir, int id)
{
    if (speed_right(buff)) {
        if (buff->axes.mid_values / 4 > 2100) {
            exec_and_print(buff, my_strcat(set[7], "0.8\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.01\n"));
        }
        if (buff->axes.mid_values / 4 > 1800) {
            exec_and_print(buff, my_strcat(set[7], "0.7\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.01\n"));
        }
        if (buff->axes.mid_values / 4 > 1500) {
            exec_and_print(buff, my_strcat(set[7], "0.5\n"));
            return dir = my_strdup(my_strcat(set[6], "-0.01\n"));
        }
    }
    return NULL;
}

char *drifting_2(buff_t *buff, char *dir, int id)
{
    if (speed_left(buff)) {
        if (buff->axes.mid_values / 4 > 2100) {
            exec_and_print(buff, my_strcat(set[7], "0.8\n"));
            return dir = my_strdup(my_strcat(set[6], "0.01\n"));
        }
        if (buff->axes.mid_values / 4 > 1800) {
            exec_and_print(buff, my_strcat(set[7], "0.7\n"));
            return dir = my_strdup(my_strcat(set[6], "0.01\n"));
        }
        if (buff->axes.mid_values / 4 > 1500) {
            exec_and_print(buff, my_strcat(set[7], "0.5\n"));
            return dir = my_strdup(my_strcat(set[6], "0.01\n"));
        }
    }
    return NULL;
}

char *drifting(buff_t *buff, char *dir, int id)
{
    if (id == 0 && buff->axes.left_values / 4 < 150) {
        exec_and_print(buff, my_strcat(set[6], "-0.9\n"));
        exec_and_print(buff, my_strcat(set[8], "0.9\n"));
        exec_and_print(buff, my_strcat(set[6], "0.9\n"));
        exec_and_print(buff, my_strcat(set[8], "0.2\n"));
        return dir = my_strdup(my_strcat(set[8], "0.99\n"));
    }
    if (id == 0 && buff->axes.right_values / 4 < 150) {
        exec_and_print(buff, my_strcat(set[6], "0.9\n"));
        exec_and_print(buff, my_strcat(set[8], "0.9\n"));
        exec_and_print(buff, my_strcat(set[6], "-0.9\n"));
        exec_and_print(buff, my_strcat(set[8], "0.2\n"));
        return dir = my_strdup(my_strcat(set[8], "0.99\n"));
    }
    return NULL;
}
