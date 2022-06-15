/*
** EPITECH PROJECT, 2022
** dl
** File description:
** display_loosee
*/
#include "rpg.h"
#include "my.h"

void exit_after_game(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if ((window->event.type == sfEvtMouseButtonPressed) &&
    (window->posi_mouse.x > sprite_struct->s_exit3.posi.x &&
    window->posi_mouse.x < sprite_struct->s_exit3.posi.x + 510
    && window->posi_mouse.y > sprite_struct->s_exit3.posi.y &&
    window->posi_mouse.y < sprite_struct->s_exit3.posi.y + 70))
        sfRenderWindow_close(window->window);
}

void retry_after_game(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if ((window->event.type == sfEvtMouseButtonPressed) &&
    (window->posi_mouse.x > sprite_struct->s_retry.posi.x &&
    window->posi_mouse.x < sprite_struct->s_retry.posi.x + 150 &&
    window->posi_mouse.y > sprite_struct->s_retry.posi.y &&
    window->posi_mouse.y < sprite_struct->s_retry.posi.y + 150))
        window->nb_switcher = 2;
}

void create_loose(display_struct_t *sprite_struct)
{
    sfVector2f x = (sfVector2f) {1.7, 1.7};
    sprite_struct->s_loose.posi = (sfVector2f) {500, -200};
    sprite_struct->t_loose.t =
    sfTexture_createFromFile("Ressources/game_over.png", NULL);
    sprite_struct->s_loose.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_loose.s,
    sprite_struct->t_loose.t, sfTrue);
    sfSprite_setScale(sprite_struct->s_loose.s, x);
    sfSprite_setPosition(sprite_struct->s_loose.s,
    sprite_struct->s_loose.posi);
    sprite_struct->s_exit3.posi = (sfVector2f) {300, 750};
    sprite_struct->t_exit3.t =
    sfTexture_createFromFile("Ressources/Exit.png", NULL);
    sprite_struct->s_exit3.rect = (sfIntRect) {10, 0, 510, 70};
    sprite_struct->s_exit3.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_exit3.s,
    sprite_struct->t_exit3.t, sfTrue);
    sfSprite_setTextureRect(sprite_struct->s_exit3.s,
    sprite_struct->s_exit3.rect);
    sfSprite_setPosition(sprite_struct->s_exit3.s,
    sprite_struct->s_exit3.posi);
}

void display_loose(basic_struct_t *window, display_struct_t *sprite_struct)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    helper_drawing(window,sprite_struct);
    exit_after_game(window, sprite_struct);
}

void helper_drawing(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(window->window, sprite_struct->shome.s, NULL);
    sfRenderWindow_drawSprite(window->window, sprite_struct->s_exit3.s, NULL);
    sfRenderWindow_drawSprite(window->window, sprite_struct->s_loose.s, NULL);
}
