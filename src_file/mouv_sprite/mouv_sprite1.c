/*
** EPITECH PROJECT, 2022
** mooving sprite
** File description:
** mooving all sprite of each nb_switcher
*/

#include "rpg.h"
#include "my.h"

void m_left_map(display_struct_t *s)
{
    s->a.s_tick1.posi.x += 5;
    s->a.s_tick2.posi.x += 5;
    s->a.s_tick3.posi.x += 5;
    s->a.s_tick4.posi.x += 5;
    s->a.s_tick5.posi.x += 5;
    s->s_walpa.posi.x += 5;
    s->s_enemy_face1.posi.x += 5;
    s->s_enemy_face2.posi.x += 5;
    s->s_enemy_face3.posi.x += 5;
    s->s_enemy_face4.posi.x += 5;
    s->s_enemy_face5.posi.x += 5;
    s->s_enemy1.posi.x += 5;
    s->s_enemy2.posi.x += 5;
    s->s_enemy3.posi.x += 5;
    s->s_enemy4.posi.x += 5;
    s->s_enemy5.posi.x += 5;
    spriteposx(s);
}

void m_left(display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        if (sprite_struct->s_walpa.posi.x < 910) {
                m_left_map(sprite_struct);
        }
        if (sprite_struct->seconds > 0.10) {
            sprite_struct->a.s_main.rect.top = 235;
            sprite_struct->a.s_main.rect.height = 120;
            mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
            sfClock_restart(sprite_struct->clock.clock);
        }
    }
    return;
}

void m_right_map(display_struct_t *s)
{
    s->a.s_tick1.posi.x -= 5;
    s->a.s_tick2.posi.x -= 5;
    s->a.s_tick3.posi.x -= 5;
    s->a.s_tick4.posi.x -= 5;
    s->a.s_tick5.posi.x -= 5;
    s->s_walpa.posi.x -= 5;
    s->s_enemy_face1.posi.x -= 5;
    s->s_enemy_face2.posi.x -= 5;
    s->s_enemy_face3.posi.x -= 5;
    s->s_enemy_face4.posi.x -= 5;
    s->s_enemy_face5.posi.x -= 5;
    s->s_enemy1.posi.x -= 5;
    s->s_enemy2.posi.x -= 5;
    s->s_enemy3.posi.x -= 5;
    s->s_enemy4.posi.x -= 5;
    s->s_enemy5.posi.x -= 5;
    spritepos(s);
}

void m_right(display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (sprite_struct->s_walpa.posi.x > -1495) {
            m_right_map(sprite_struct);
        }
        if (sprite_struct->seconds > 0.10) {
            sprite_struct->a.s_main.rect.top = 360;
            sprite_struct->a.s_main.rect.height = 108;
            mouv_rect(&sprite_struct->a.s_main.rect, 150, 600);
            sfClock_restart(sprite_struct->clock.clock);
        }
    }
    return;
}
