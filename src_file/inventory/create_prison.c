/*
** EPITECH PROJECT, 2022
** invetory.c
** File description:
** inventory display
*/
#include "my.h"
#include "rpg.h"

void create_prison(basic_struct_t *window)
{
    window->i.sprison.posi = (sfVector2f) {895, 295};
    window->i.tprison.t =
        sfTexture_createFromFile("Ressources/prison.png", NULL);
    window->i.sprison.rect = (sfIntRect) {0, 0, 200, 200};
    window->i.sprison.s = sfSprite_create();
    sfSprite_setTexture(window->i.sprison.s, window->i.tprison.t, sfTrue);
    sfSprite_setTextureRect(window->i.sprison.s, window->i.sprison.rect);
    sfSprite_setPosition(window->i.sprison.s, window->i.sprison.posi);
}
