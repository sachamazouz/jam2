/*
** EPITECH PROJECT, 2022
** epitech detct ennemy
** File description:
** rpg
*/

#include "my.h"
#include "rpg.h"

void detect_enemy_fight3(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) &&
        sprite_struct->s_enemy1.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy1.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy1.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy1.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight1 != 1) {
        basic->nb_switcher = 6;
        sprite_struct->detect_fight1 = 1;
        sprite_struct->what_face = 1;
    }
    detectez(basic, sprite_struct);
}

void detect_enemy_fight2(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) &&
        sprite_struct->s_enemy5.posi.x >=
        sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy5.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy5.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy5.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight5 != 1) {
        basic->nb_switcher = 6;
        sprite_struct->detect_fight5 = 1;
        sprite_struct->what_face = 5;
    }
    detectvif(basic, sprite_struct);
}

void detect_enemy_fight(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) &&
        sprite_struct->s_enemy2.posi.x >= sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy2.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy2.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy2.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight2 != 1){
        basic->nb_switcher = 6;
        sprite_struct->detect_fight2 = 1;
        sprite_struct->what_face = 2;
    }
    displayer_a1(basic, sprite_struct);
    detect_enemy_fight2(basic, sprite_struct);
    detect_enemy_fight3(basic, sprite_struct);
}

void displayer_a2(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->s_enemy4.posi.x >= sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy4.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy4.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy4.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight4 != 1)
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_abutton.s, NULL);
    if (sprite_struct->s_enemy5.posi.x >= sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy5.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy5.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy5.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight5 != 1)
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_abutton.s, NULL);
}

void displayer_a1(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->s_enemy1.posi.x >=
    sprite_struct->a.s_main.posi.x - 100
        && sprite_struct->s_enemy1.posi.x <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->s_enemy1.posi.y >=
        sprite_struct->a.s_main.posi.y - 100
        && sprite_struct->s_enemy1.posi.y <=
        sprite_struct->a.s_main.posi.x + 100
        && sprite_struct->detect_fight1 != 1)
        sfRenderWindow_drawSprite(basic->window,
        sprite_struct->s_abutton.s, NULL);
    detectpam(basic, sprite_struct);
    detectzen(basic, sprite_struct);
    displayer_a2(basic, sprite_struct);
}
