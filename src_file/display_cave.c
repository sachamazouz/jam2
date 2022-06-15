/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "my.h"
#include "rpg.h"

void m_movesbis(display_struct_t *sprite_struct)
{
    sfVector2f c = {2, 0};
    sfVector2f b = {-2, 0};

    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        m_lefts(sprite_struct);
        sfSprite_move(sprite_struct->a.s_main.s ,b);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        m_rights(sprite_struct);
        sfSprite_move(sprite_struct->a.s_main.s ,c);
    }
}

void m_moves(display_struct_t *sprite_struct)
{
    sfVector2f x = {0, 2};
    sfVector2f f = {0, -2};

    sprite_struct->clock.time =
        sfClock_getElapsedTime(sprite_struct->clock.clock);
    sprite_struct->seconds =
        sprite_struct->clock.time.microseconds / 1000000.0;
    if (managbar(sprite_struct) == 0) {
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            m_downs(sprite_struct);
            sfSprite_move(sprite_struct->a.s_main.s ,x);
        }
        if (sfKeyboard_isKeyPressed(sfKeyUp)) {
            m_ups(sprite_struct);
            sfSprite_move(sprite_struct->a.s_main.s ,f);
        }
        m_movesbis(sprite_struct);
    }
}

void manageexit(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->a.s_main.posi.y > 750 &&
        sprite_struct->a.s_main.posi.x < 350 &&
        sprite_struct->a.s_main.posi.x > 125) {
        sprite_struct->a.s_main.posi = (sfVector2f) {860, 400};
        sprite_struct->s_walpa.posi.y -= 20;
        sfSprite_setPosition(sprite_struct->a.s_main.s
                             , sprite_struct->a.s_main.posi);
        basic->nb_switcher = 3;
    }
    if (sprite_struct->a.s_main.posi.y > 684 &&
        sprite_struct->a.s_main.posi.y < 850 &&
        sprite_struct->a.s_main.posi.x == 650) {
        sprite_struct->a.s_main.posi = (sfVector2f) {860, 380};
        sprite_struct->s_walpa.posi.x += 20;
        sfSprite_setPosition(sprite_struct->a.s_main.s,
                             sprite_struct->a.s_main.posi);
        basic->nb_switcher = 3;
    }
}

void maps_cave(display_struct_t *sprite_struct)
{
    sfVector2f x = {1500 , -60};
    sfVector2f c = {0 , -950};
    sfVector2f z = {0 , 0};
    sfVector2f b = {1500 , 832};

    x.x = sprite_struct->a.s_main.posi.x;
    b.x = sprite_struct->a.s_main.posi.x;
    if (sprite_struct->a.s_main.posi.y > 850) {
        sfSprite_setPosition(sprite_struct->s_cave.s , c);
        sfSprite_setPosition(sprite_struct->a.s_main.s, x);
    }
    if (sprite_struct->a.s_main.posi.y < -85) {
        sfSprite_setPosition(sprite_struct->s_cave.s , z);
        sfSprite_setPosition(sprite_struct->a.s_main.s, b);
    }
}

void display_cave(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_cave.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_main.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_bar.s, NULL);
    sfSprite_setPosition(sprite_struct->s_bar.s, (sfVector2f) {450 , 300});
    sfSprite_setScale(sprite_struct->s_bar.s, (sfVector2f) {0.8, 0.8});
    sfSprite_setTextureRect(sprite_struct->a.s_main.s,
                            sprite_struct->a.s_main.rect);
    sprite_struct->a.s_main.posi =
        sfSprite_getPosition(sprite_struct->a.s_main.s);
    maps_cave(sprite_struct);
    m_moves(sprite_struct);
    manageexit(basic, sprite_struct);
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        basic->nb_switcher = 8;
}
