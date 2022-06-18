/*
** EPITECH PROJECT, 2022
** byapasse
** File description:
** displau_menu
*/

#include "my.h"
#include "rpg.h"

void managehomeless(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_homeb.s);

    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed ) {
        basic->nb_switcher = 1;
    }
}

void display_menu(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_esc.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_mon.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_homeb.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_30.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_60.s, NULL);
    sfSprite_setScale(sprite_struct->s_mon.s, (sfVector2f) { 0.2 , 0.2});
    sfSprite_setScale(sprite_struct->s_60.s, (sfVector2f) { 0.3 , 0.3});
    sfSprite_setScale(sprite_struct->s_30.s, (sfVector2f) { 0.85, 0.85});
    sfSprite_setPosition(sprite_struct->s_mof.s, (sfVector2f) {-75 ,100});
    sfSprite_setPosition(sprite_struct->s_mon.s, (sfVector2f) {700 ,350});
    sfSprite_setPosition(sprite_struct->s_30.s, (sfVector2f) {900 ,550});
    sfSprite_setPosition(sprite_struct->s_60.s, (sfVector2f) {700,550});
    managemon(basic, sprite_struct);
    managemof(basic, sprite_struct);
    manage30(basic, sprite_struct);
    manage60(basic, sprite_struct);
    managehomeless(basic, sprite_struct);
}
