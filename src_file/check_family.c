/*
** EPITECH PROJECT, 2022
** dg
** File description:
** check_family
*/

#include "my.h"
#include "rpg.h"

int check_family(display_struct_t *sprite_struct, enemy_pos_t *array)
{
    basic_struct_t *s;
    int tour_de_boucle = 0;
    int cursor = 0;
    int x_main = 730;
    int y_main = 320.0;
    int x_main_max = 940;
    int y_main_max = 500;

    printf("tick 1 est de coordonnée: "
    "\nx = %f\n y = %f\n",sprite_struct->a.s_tick1.posi.x,sprite_struct->a.s_tick1.posi.y);

    if (sprite_struct->a.s_tick1.posi.x >= x_main && sprite_struct->a.s_tick1.posi.x <= x_main_max
    && sprite_struct->a.s_tick1.posi.y >= y_main && sprite_struct->a.s_tick1.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick2.posi.x >= x_main && sprite_struct->a.s_tick2.posi.x <= x_main_max
    && sprite_struct->a.s_tick2.posi.y >= y_main && sprite_struct->a.s_tick2.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick3.posi.x >= x_main && sprite_struct->a.s_tick3.posi.x <= x_main_max
    && sprite_struct->a.s_tick3.posi.y >= y_main && sprite_struct->a.s_tick3.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick4.posi.x >= x_main && sprite_struct->a.s_tick4.posi.x <= x_main_max
    && sprite_struct->a.s_tick4.posi.y >= y_main && sprite_struct->a.s_tick4.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick5.posi.x >= x_main && sprite_struct->a.s_tick5.posi.x <= x_main_max
    && sprite_struct->a.s_tick5.posi.y >= y_main && sprite_struct->a.s_tick5.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick6.posi.x >= x_main && sprite_struct->a.s_tick6.posi.x <= x_main_max
    && sprite_struct->a.s_tick6.posi.y >= y_main && sprite_struct->a.s_tick6.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick7.posi.x >= x_main && sprite_struct->a.s_tick7.posi.x <= x_main_max
    && sprite_struct->a.s_tick7.posi.y >= y_main && sprite_struct->a.s_tick7.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick8.posi.x >= x_main && sprite_struct->a.s_tick8.posi.x <= x_main_max
    && sprite_struct->a.s_tick8.posi.y >= y_main && sprite_struct->a.s_tick8.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick9.posi.x >= x_main && sprite_struct->a.s_tick9.posi.x <= x_main_max
    && sprite_struct->a.s_tick9.posi.y >= y_main && sprite_struct->a.s_tick9.posi.y <= y_main_max)
        return 1;
    if (sprite_struct->a.s_tick10.posi.x >= x_main && sprite_struct->a.s_tick10.posi.x <= x_main_max
    && sprite_struct->a.s_tick10.posi.y >= y_main && sprite_struct->a.s_tick10.posi.y <= y_main_max)
        return 1;
    return 0;
}