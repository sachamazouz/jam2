/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "my.h"
#include "rpg.h"

int managbar(display_struct_t *sprite_struct)
{
    if  (sprite_struct->a.s_main.posi.x > 350 ||
         sprite_struct->a.s_main.posi.x < 125) {
        sprite_struct->a.s_main.posi =
            sfSprite_getPosition(sprite_struct->a.s_main.s);
        sprite_struct->a.s_main.posi.x = 220;
        sfSprite_setPosition(sprite_struct->a.s_main.s,
                             sprite_struct->a.s_main.posi);
        return 1;
    }
    if (sprite_struct->a.s_main.posi.y < 300) {
        sprite_struct->a.s_main.posi =
            sfSprite_getPosition(sprite_struct->a.s_main.s);
        sprite_struct->a.s_main.posi.y = 320;
        sfSprite_setPosition(sprite_struct->a.s_main.s,
                             sprite_struct->a.s_main.posi);
        return 1;
    }
    else
        return 0;
}

void m_downs(display_struct_t *sprite_struct)
{
    if (sprite_struct->seconds > 0.10) {
        sprite_struct->a.s_main.rect.top = 0;
        sprite_struct->a.s_main.rect.height = 120;
        mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
        sfClock_restart(sprite_struct->clock.clock);
    }
    return;
}

void m_lefts(display_struct_t *sprite_struct)
{
    if (sprite_struct->seconds > 0.10) {
        sprite_struct->a.s_main.rect.top = 235;
        sprite_struct->a.s_main.rect.height = 120;
        mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
        sfClock_restart(sprite_struct->clock.clock);
    }
    return;
}

void m_rights(display_struct_t *sprite_struct)
{
    if (sprite_struct->seconds > 0.10) {
        sprite_struct->a.s_main.rect.top = 360;
        sprite_struct->a.s_main.rect.height = 108;
        mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
        sfClock_restart(sprite_struct->clock.clock);
    }
    return;
}

void m_ups(display_struct_t *sprite_struct)
{
    if (sprite_struct->seconds > 0.10) {
        sprite_struct->a.s_main.rect.top = 118;
        sprite_struct->a.s_main.rect.height = 120;
        mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
        sfClock_restart(sprite_struct->clock.clock);
    }
    return;
}
