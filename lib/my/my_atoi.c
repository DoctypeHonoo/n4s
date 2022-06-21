/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** my_atoi
*/

#include "../../include/my.h"

float my_atoi(char const *str)
{
    float a = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign *= -1;
        i++;
    }
    for (; str[i] != '\0'; i++) {
        a *= 10;
        a += (str[i] - '0');
    }
    return a * sign;
}
