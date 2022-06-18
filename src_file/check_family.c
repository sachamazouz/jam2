/*
** EPITECH PROJECT, 2022
** dg
** File description:
** check_family
*/

#include "my.h"
#include "rpg.h"

void check_family(display_struct_t *sprite_struct, enemy_pos_t *array)
{
    int tour_de_boucle = 0;
    int cursor = 0;
    int x_main = 860.0 - 150;
    int y_main = 400.0;
    int x_main_max = x_main + 150;
    int y_main_max = y_main + 130;

    printf("tick 1 est de coordonnée: "
    "\nx = %f\n y = %f\n",sprite_struct->a.s_tick1.posi.x,sprite_struct->a.s_tick1.posi.y);

    if (sprite_struct->a.s_tick1.posi.x > x_main && sprite_struct->a.s_tick1.posi.x < x_main_max
    && sprite_struct->a.s_tick1.posi.y > y_main && sprite_struct->a.s_tick1.posi.y < y_main_max)
        printf("into \n");

    return;
}