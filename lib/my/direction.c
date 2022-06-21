/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** direction
*/

#include "../../include/my.h"

int boomer_left(buff_t *buff)
{
    if ((buff->axes.left_values > buff->axes.right_values))
        return 1;
    return 0;
}

int boomer_right(buff_t *buff)
{
    if (buff->axes.right_values > buff->axes.left_values)
        return 1;
    return 0;
}

int speed_left(buff_t *buff)
{
    if ((buff->axes.left_values > buff->axes.right_values)
    && (buff->axes.left_values / 4 > 300
    && (buff->axes.right_values / 4 > 300)))
        return 1;
    return 0;
}

int speed_right(buff_t *buff)
{
    if ((buff->axes.right_values > buff->axes.left_values)
    && (buff->axes.left_values / 4 > 300
    && (buff->axes.right_values / 4 > 300)))
        return 1;
    return 0;
}
