/*
** EPITECH PROJECT, 2022
** invetory.c
** File description:
** inventory display
*/
#include "my.h"
#include "rpg.h"

void create_key1(basic_struct_t *window)
{
    window->i.skey1.posi = (sfVector2f) {715, 720};
    window->i.tkey1.t =
        sfTexture_createFromFile("Ressources/key/key1.png", NULL);
    window->i.skey1.rect = (sfIntRect) {0, 0, 80, 86};
    window->i.skey1.s = sfSprite_create();
    sfSprite_setTexture(window->i.skey1.s, window->i.tkey1.t, sfTrue);
    sfSprite_setTextureRect(window->i.skey1.s, window->i.skey1.rect);
    sfSprite_setPosition(window->i.skey1.s, window->i.skey1.posi);
    return;
}

void create_key2(basic_struct_t *window)
{
    window->i.skey2.posi = (sfVector2f) {780, 720};
    window->i.tkey2.t =
        sfTexture_createFromFile("Ressources/key/key2.png", NULL);
    window->i.skey2.rect = (sfIntRect) {0, 0, 80, 86};
    window->i.skey2.s = sfSprite_create();
    sfSprite_setTexture(window->i.skey2.s, window->i.tkey2.t, sfTrue);
    sfSprite_setTextureRect(window->i.skey2.s, window->i.skey2.rect);
    sfSprite_setPosition(window->i.skey2.s, window->i.skey2.posi);
    return;
}

void create_key3(basic_struct_t *window)
{
    window->i.skey3.posi = (sfVector2f) {840, 720};
    window->i.tkey3.t =
    sfTexture_createFromFile("Ressources/key/key3.png", NULL);
    window->i.skey3.rect = (sfIntRect) {0, 0, 80, 86};
    window->i.skey3.s = sfSprite_create();
    sfSprite_setTexture(window->i.skey3.s, window->i.tkey3.t, sfTrue);
    sfSprite_setTextureRect(window->i.skey3.s, window->i.skey3.rect);
    sfSprite_setPosition(window->i.skey3.s, window->i.skey3.posi);
    return;
}

void create_key4(basic_struct_t *window)
{
    window->i.skey4.posi = (sfVector2f) {900, 720};
    window->i.tkey4.t =
        sfTexture_createFromFile("Ressources/key/key4.png", NULL);
    window->i.skey4.rect = (sfIntRect) {0, 0, 80, 86};
    window->i.skey4.s = sfSprite_create();
    sfSprite_setTexture(window->i.skey4.s, window->i.tkey4.t, sfTrue);
    sfSprite_setTextureRect(window->i.skey4.s, window->i.skey4.rect);
    sfSprite_setPosition(window->i.skey4.s, window->i.skey4.posi);
    return;
}

void create_key5(basic_struct_t *window)
{
    window->i.skey5.posi = (sfVector2f) {965, 720};
    window->i.tkey5.t =
        sfTexture_createFromFile("Ressources/key/key5.png", NULL);
    window->i.skey5.rect = (sfIntRect) {0, 0, 80, 86};
    window->i.skey5.s = sfSprite_create();
    sfSprite_setTexture(window->i.skey5.s, window->i.tkey5.t, sfTrue);
    sfSprite_setTextureRect(window->i.skey5.s, window->i.skey5.rect);
    sfSprite_setPosition(window->i.skey5.s, window->i.skey5.posi);
    return;
}
