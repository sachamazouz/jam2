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
    int haut_gauchex = sprite_struct->s_walpa.posi.x - 50;
    int haut_gauchey = sprite_struct->s_walpa.posi.y - 50;
    int bas_droitx = sprite_struct->s_walpa.posi.x + 50;
    int bas_droity = sprite_struct->s_walpa.posi.y + 50;


    printf("tick 1 est de coordonnée: "
    "\nx = %f\n y = %f\n",sprite_struct->a.s_tick1.posi.x,sprite_struct->a.s_tick1.posi.y);

    if ((sprite_struct->a.s_tick1.posi.x) > sprite_struct->a.s_main.posi.x &&
    (sprite_struct->a.s_tick1.posi.x + 200) < sprite_struct->a.s_main.posi.x &&
    (sprite_struct->a.s_tick1.posi.y) > sprite_struct->a.s_main.posi.y &&
    (sprite_struct->a.s_tick1.posi.y + 130) > sprite_struct->a.s_main.posi.y)
    bas_droity++;

    return;
}