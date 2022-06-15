/*
** EPITECH PROJECT, 2022
** invetory.c
** File description:
** inventory display
*/
#include "my.h"
#include "rpg.h"

void create_attack1(basic_struct_t *window)
{
    window->i.sattack1.posi = (sfVector2f) {725, 555};
    window->i.tattack1.t =
        sfTexture_createFromFile("Ressources/attack/segfault.png", NULL);
    window->i.sattack1.rect = (sfIntRect) {0, 0, 235, 14};
    window->i.sattack1.s = sfSprite_create();
    sfSprite_setTexture(window->i.sattack1.s, window->i.tattack1.t, sfTrue);
    sfSprite_setTextureRect(window->i.sattack1.s, window->i.sattack1.rect);
    sfSprite_setPosition(window->i.sattack1.s, window->i.sattack1.posi);
    return;
}

void create_attack2(basic_struct_t *window)
{
    window->i.sattack2.posi = (sfVector2f) {730, 615};
    window->i.tattack2.t =
        sfTexture_createFromFile("Ressources/attack/log_netsoul.png", NULL);
    window->i.sattack2.rect = (sfIntRect) {0, 0, 200, 12};
    window->i.sattack2.s = sfSprite_create();
    sfSprite_setTexture(window->i.sattack2.s, window->i.tattack2.t, sfTrue);
    sfSprite_setTextureRect(window->i.sattack2.s, window->i.sattack2.rect);
    sfSprite_setPosition(window->i.sattack2.s, window->i.sattack2.posi);
    return;
}

void create_attack3(basic_struct_t *window)
{
    window->i.sattack3.posi = (sfVector2f) {730, 675};
    window->i.tattack3.t =
        sfTexture_createFromFile("Ressources/attack/pcube.png", NULL);
    window->i.sattack3.rect = (sfIntRect) {0, 0, 200, 14};
    window->i.sattack3.s = sfSprite_create();
    sfSprite_setTexture(window->i.sattack3.s, window->i.tattack3.t, sfTrue);
    sfSprite_setTextureRect(window->i.sattack3.s, window->i.sattack3.rect);
    sfSprite_setPosition(window->i.sattack3.s, window->i.sattack3.posi);
    return;
}

void create_attack4(basic_struct_t *window)
{
    window->i.sattack4.posi = (sfVector2f) {1040, 555};
    window->i.tattack4.t =
        sfTexture_createFromFile("Ressources/attack/review.png", NULL);
    window->i.sattack4.rect = (sfIntRect) {0, 0, 200, 14};
    window->i.sattack4.s = sfSprite_create();
    sfSprite_setTexture(window->i.sattack4.s, window->i.tattack4.t, sfTrue);
    sfSprite_setTextureRect(window->i.sattack4.s, window->i.sattack4.rect);
    sfSprite_setPosition(window->i.sattack4.s, window->i.sattack4.posi);
    return;
}

void create_attack5(basic_struct_t *window)
{
    window->i.sattack5.posi = (sfVector2f) {1040, 615};
    window->i.tattack5.t =
        sfTexture_createFromFile("Ressources/attack/test_unitaire.png", NULL);
    window->i.sattack5.rect = (sfIntRect) {0, 0, 200, 14};
    window->i.sattack5.s = sfSprite_create();
    sfSprite_setTexture(window->i.sattack5.s, window->i.tattack5.t, sfTrue);
    sfSprite_setTextureRect(window->i.sattack5.s, window->i.sattack5.rect);
    sfSprite_setPosition(window->i.sattack5.s, window->i.sattack5.posi);
    return;
}
