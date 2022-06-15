/*
** EPITECH PROJECT, 2022
** rpg project 
** File description:
** collisoion 2
*/
#include "rpg.h"
#include "my.h"

void condition_right_move2(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.x > -2500
    && sprite_struct->s_walpa.posi.y < -2750
    && sprite_struct->s_walpa.posi.y > -3100)
        m_right_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x > -1900
    && sprite_struct->s_walpa.posi.y < -3100)
        m_right_map(sprite_struct);
}

void condition_right_move(display_struct_t *sprite_struct)
{
    if (sprite_struct->s_walpa.posi.x > -940
    && sprite_struct->s_walpa.posi.y < 450
    && sprite_struct->s_walpa.posi.y > -50)
        m_right_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x > -1700
    && sprite_struct->s_walpa.posi.y < -50
        && sprite_struct->s_walpa.posi.y > -880)
        m_right_map(sprite_struct);
    if (sprite_struct->s_walpa.posi.x > -1900
    && sprite_struct->s_walpa.posi.y < -880
        && sprite_struct->s_walpa.posi.y > -2750)
        m_right_map(sprite_struct);
}

void condition_right(display_struct_t *sprite_struct)
{
    condition_right_move(sprite_struct);
    condition_right_move2(sprite_struct);
}
