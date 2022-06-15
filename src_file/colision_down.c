/*
** EPITECH PROJECT, 2022
** epitech rpg project
** File description:
** colision fisrt file
*/
#include "rpg.h"
#include "my.h"

void condition_down_move2(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.y > -3200
    && sprite_struct->s_walpa.posi.y < -2400
    && sprite_struct->s_walpa.posi.x < 700
    && sprite_struct->s_walpa.posi.x > 300)
        m_down_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y > -1550
    && sprite_struct->s_walpa.posi.y < -500
        && sprite_struct->s_walpa.posi.x < 700
        && sprite_struct->s_walpa.posi.x > 0)
        m_down_map(sprite_struct);
}

void condition_down_move(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.y > -3100 &&
    sprite_struct->s_walpa.posi.x < -1900
    && sprite_struct->s_walpa.posi.x > -2500)
        m_down_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y > -4900
    && sprite_struct->s_walpa.posi.x < 0
    && sprite_struct->s_walpa.posi.x > -1900)
        m_down_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y > -4000
    && sprite_struct->s_walpa.posi.y < -1800
    && sprite_struct->s_walpa.posi.x < 300
    && sprite_struct->s_walpa.posi.x > 0)
        m_down_map(sprite_struct);
}

void condition_down(display_struct_t *sprite_struct)
{
    condition_down_move(sprite_struct);
    condition_down_move2(sprite_struct);
}
