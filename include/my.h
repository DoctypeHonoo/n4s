/*
** EPITECH PROJECT, 2022
** B-AIA-200-MPL-2-1-n4s-guillaume.lemoine
** File description:
** my
*/

typedef struct list_s {
    char *name;
    int data;
    char *value;
    struct list_s *next;
} list_t;

typedef struct axes_s {
    float left;
    float mid;
    float right;
    int left_values;
    int left_mid_values;
    int mid_values;
    int right_mid_values;
    int right_values;
    float dir_value;
} axes_t;

#ifndef MY_H_
    #define MY_H_
    #define SPORT_LEFT 0
    #define SPORT_RIGHT 1
    #define BOOMER_LEFT 2
    #define BOOMER_RIGHT 3
    #define RED "\x1b[34;01m$1\x1b[0m"
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <stdlib.h>
    #include "tools.h"

    #define BOOMER_1_3 500
    #define BOOMER_2_3 650
    #define BOOMER_3_3 750

    #define BOOMER_1_1 300
    #define BOOMER_2_1 400
    #define BOOMER_3_1 500

    #define BOOMER_4 850

    typedef struct buff_s {
    char **tab;
    list_t *list_stats;
    char *line;
    ssize_t len;
    int value;
    axes_t axes;
    int id;
} buff_t;

static char *set[] = {
    "START_SIMULATION\n",
    "CAR_FORWARD:0.5\n",
    "GET_INFO_LIDAR\n",
    "END_SIMULATION\n",
    "1:OK:No errors so far:",
    ":No further info",
    "WHEELS_DIR:",
    "CAR_FORWARD:",
    "CAR_BACKWARDS:",
};

void split_path(char ***tab, char *path, int y, int j);
char **parsing_path(char *path);
void my_getline(buff_t *buff);
int boomer_left(buff_t *buff);
int boomer_right(buff_t *buff);
int speed_left(buff_t *buff);
int speed_right(buff_t *buff);
void set_lidar(buff_t *buff);
float lidar_value(list_t *list, int nb);
void print_lidar(buff_t buff);
char *drifting(buff_t *buff, char *dir, int id);
char *drifting_2(buff_t *buff, char *dir, int id);
char *drifting_3(buff_t *buff, char *dir, int id);
char *drifting_4(buff_t *buff, char *dir, int id);
char *drifting_5(buff_t *buff, char *dir, int id);
void exec_and_print_lidar(buff_t *buff, const char *set);
void exec_and_print(buff_t *buff, const char *set);
char *crop_str(char *src, const char *start, const char *end);
char **parse_lidar(char *lidar);
void collider(buff_t *buff);
int check_mod(buff_t *buff);
char *mod_sport_left(buff_t *buff);
char *mod_sport_right(buff_t *buff);
char *mod_boomer_left(buff_t *buff);
char *mod_boomer_right(buff_t *buff);
void calc_sides(buff_t *buff);

#endif
