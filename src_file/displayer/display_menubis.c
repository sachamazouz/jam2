/*
** EPITECH PROJECT, 2022
** byapasse
** File description:
** displau_menu
*/

#include "my.h"
#include "rpg.h"

void managemof(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_mof.s);

    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed ) {
        basic->caver_enter = 1;
        sfMusic_stop(sprite_struct->music_game.music);
        play_music(sprite_struct, basic);
    }
}

void managemon(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_mon.s);

    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed &&
         basic->caver_enter == 1) {
        basic->caver_enter = 0;
        play_music(sprite_struct, basic);
    }
}

void manage30(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_30.s);

    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed ) {
        sprite_struct->frame = 30;
        sfRenderWindow_setFramerateLimit(basic->window, 30);
    }
}

void manage60(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_60.s);

    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed ) {
        sprite_struct->frame = 60;
        sfRenderWindow_setFramerateLimit(basic->window, 60);
    }
}
