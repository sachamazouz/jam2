/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/

#include "my.h"
#include "rpg.h"

void change_life(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sprite_struct->clock2.time =
        sfClock_getElapsedTime(sprite_struct->clock2.clock);
    if ((sprite_struct->clock2.time.microseconds / 1000000) > 2) {
        window->our_life -= 10 * sprite_struct->what_face;
        sfClock_restart(sprite_struct->clock2.clock);
    }
}

void Spriteset(display_struct_t *s)
{
    sfSprite_setPosition(s->s_walpa.s, s->s_walpa.posi);
    sfSprite_setPosition(s->s_enemy1.s, s->s_enemy1.posi);
    sfSprite_setPosition(s->s_enemy2.s, s->s_enemy2.posi);
    sfSprite_setPosition(s->s_enemy3.s, s->s_enemy3.posi);
    sfSprite_setPosition(s->s_enemy4.s, s->s_enemy4.posi);
    sfSprite_setPosition(s->s_enemy5.s, s->s_enemy5.posi);
    sfSprite_setPosition(s->s_enemy_face1.s, s->s_enemy_face1.posi);
    sfSprite_setPosition(s->s_enemy_face2.s, s->s_enemy_face2.posi);
    sfSprite_setPosition(s->s_enemy_face3.s, s->s_enemy_face3.posi);
    sfSprite_setPosition(s->s_enemy_face4.s, s->s_enemy_face4.posi);
    sfSprite_setPosition(s->s_enemy_face5.s, s->s_enemy_face5.posi);
}