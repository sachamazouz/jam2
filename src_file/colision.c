/*
** EPITECH PROJECT, 2022
** epitech rpg project
** File description:
** colision fisrt file
*/

#include "rpg.h"
#include "my.h"

void condition_left_move2(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.x < 150
    && sprite_struct->s_walpa.posi.y < -1900
    && sprite_struct->s_walpa.posi.y > -2500)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < 750
    && sprite_struct->s_walpa.posi.y < -2500
    && sprite_struct->s_walpa.posi.y > -3200)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < 150
    && sprite_struct->s_walpa.posi.y < -3200
    && sprite_struct->s_walpa.posi.y > -3700)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < 0
    && sprite_struct->s_walpa.posi.y < -3700)
        m_left_map(sprite_struct);
}

void condition_left_move(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.x < -570
    && sprite_struct->s_walpa.posi.y > 100)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < -200
    && sprite_struct->s_walpa.posi.y < 100
    && sprite_struct->s_walpa.posi.y > -600)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < 750
    && sprite_struct->s_walpa.posi.y < -600
    && sprite_struct->s_walpa.posi.y > -1600)
        m_left_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x < 0
    && sprite_struct->s_walpa.posi.y < -1600
    && sprite_struct->s_walpa.posi.y > -1900)
        m_left_map(sprite_struct);
}

void condition(display_struct_t *sprite_struct)
{
    condition_left_move(sprite_struct);
    condition_left_move2(sprite_struct);
}