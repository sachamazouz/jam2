/*
** EPITECH PROJECT, 2022
** byapasse
** File description:
** detect_enemy_map2
*/

#include "my.h"
#include "rpg.h"

void detectez(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) &&
        sprite_struct->s_enemy3.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy3.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy3.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy3.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight3 != 1) {
        basic->nb_switcher = 6;
        sprite_struct->detect_fight3 = 1;
        sprite_struct->what_face = 3;
    }
}

void detectvif(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) &&
        sprite_struct->s_enemy4.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy4.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy4.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy4.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight4 != 1) {
        basic->nb_switcher = 6;
        sprite_struct->detect_fight4 = 1;
        sprite_struct->what_face = 4;
    }
}

void detectzen(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->s_enemy2.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy2.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy2.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy2.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight2 != 1)
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_abutton.s, NULL);
}

void detectpam(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->s_enemy3.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy3.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy3.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy3.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight3 != 1)
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_abutton.s, NULL);
}
