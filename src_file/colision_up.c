/*
** EPITECH PROJECT, 2022
** epitech rpg project
** File description:
** colision up
*/

#include "rpg.h"
#include "my.h"

void condition_up_move(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.y < -2700
    && sprite_struct->s_walpa.posi.x < -1850
    && sprite_struct->s_walpa.posi.x > -2300)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < 100
    && sprite_struct->s_walpa.posi.x < -240
    && sprite_struct->s_walpa.posi.x > -570)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < -650
    && sprite_struct->s_walpa.posi.x < -20
    && sprite_struct->s_walpa.posi.x > -240)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < -650
    && sprite_struct->s_walpa.posi.y > -1600
    && sprite_struct->s_walpa.posi.x < 700
    && sprite_struct->s_walpa.posi.x > -20)
        m_up_map(sprite_struct);
}

void condition_up_move2(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.y < -1900
    && sprite_struct->s_walpa.posi.y > -4000
    && sprite_struct->s_walpa.posi.x < 200
    && sprite_struct->s_walpa.posi.x > -20)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < -2600
    && sprite_struct->s_walpa.posi.y > -3200
    && sprite_struct->s_walpa.posi.x < 700
    && sprite_struct->s_walpa.posi.x > 200)
        m_up_map(sprite_struct);
}

void condition_up_move3(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.y < 450
    && sprite_struct->s_walpa.posi.x < -570
    && sprite_struct->s_walpa.posi.x > -940)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < -100
    && sprite_struct->s_walpa.posi.x < -940
    && sprite_struct->s_walpa.posi.x > -1400)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < 100
    && sprite_struct->s_walpa.posi.x < -1400
    && sprite_struct->s_walpa.posi.x > -1680)
        m_up_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.y < -800
    && sprite_struct->s_walpa.posi.x < -1680
    && sprite_struct->s_walpa.posi.x > -1850)
        m_up_map(sprite_struct);
}

void condition_up(display_struct_t *sprite_struct)
{
    condition_up_move(sprite_struct);
    condition_up_move2(sprite_struct);
    condition_up_move3(sprite_struct);
}
