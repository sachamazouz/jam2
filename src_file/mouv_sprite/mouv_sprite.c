/*
** EPITECH PROJECT, 2022
** mooving sprite
** File description:
** mooving all sprite of each nb_switcher
*/

#include "rpg.h"
#include "my.h"

void m_up_map(display_struct_t *s)
{
    s->s_walpa.posi.y += 5;
    s->s_enemy_face1.posi.y += 5;
    s->s_enemy_face2.posi.y += 5;
    s->s_enemy_face3.posi.y += 5;
    s->s_enemy_face4.posi.y += 5;
    s->s_enemy_face5.posi.y += 5;
    s->s_enemy1.posi.y += 5;
    s->s_enemy2.posi.y += 5;
    s->s_enemy3.posi.y += 5;
    s->s_enemy4.posi.y += 5;
    s->s_enemy5.posi.y += 5;
    sfSprite_setPositionx(s);
}

void m_up(display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        if (sprite_struct->s_walpa.posi.y < 430) {
        m_up_map(sprite_struct);
        }
        if (sprite_struct->seconds > 0.10) {
            sprite_struct->a.s_main.rect.top = 118;
            sprite_struct->a.s_main.rect.height = 120;
            mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
            sfClock_restart(sprite_struct->clock.clock);
        }
    }
    return;
}

void m_down_map(display_struct_t *s)
{
    s->s_walpa.posi.y -= 5;
    s->s_enemy_face1.posi.y -= 5;
    s->s_enemy_face2.posi.y -= 5;
    s->s_enemy_face3.posi.y -= 5;
    s->s_enemy_face4.posi.y -= 5;
    s->s_enemy_face5.posi.y -= 5;
    s->s_enemy1.posi.y -= 5;
    s->s_enemy2.posi.y -= 5;
    s->s_enemy3.posi.y -= 5;
    s->s_enemy4.posi.y -= 5;
    s->s_enemy5.posi.y -= 5;
    Spriteset(s);
}

void m_down(display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (sprite_struct->s_walpa.posi.y > -1370) {
        m_down_map(sprite_struct);
        }
        if (sprite_struct->seconds > 0.10) {
            sprite_struct->a.s_main.rect.top = 0;
            sprite_struct->a.s_main.rect.height = 120;
            mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
            sfClock_restart(sprite_struct->clock.clock);
        }
    }
    return;
}

void m_move(display_struct_t *sprite_struct)
{
    sprite_struct->clock.time =
        sfClock_getElapsedTime(sprite_struct->clock.clock);
    sprite_struct->seconds =
        sprite_struct->clock.time.microseconds / 1000000.0;
    m_down(sprite_struct);
    m_up(sprite_struct);
    m_left(sprite_struct);
    m_right(sprite_struct);
}
