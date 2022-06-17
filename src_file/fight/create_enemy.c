/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "rpg.h"
#include "my.h"

void create_enemy1(basic_struct_t *window)
{
    window->e.s_enemy1.posi = (sfVector2f) {725, 555};
    window->e.t_enemy1.t = sfTexture_createFromFile("Ressources/attack/segfault.png", NULL);
    window->e.s_enemy1.rect = (sfIntRect) {0, 0, 235, 14};
    window->e.s_enemy1.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_enemy1.s, window->e.t_enemy1.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_enemy1.s, window->e.s_enemy1.rect);
    sfSprite_setPosition(window->e.s_enemy1.s, window->e.s_enemy1.posi);
    return;
}

void create_enemy2(basic_struct_t *window)
{
    window->e.s_enemy2.posi = (sfVector2f) {730, 615};
    window->e.t_enemy2.t =
        sfTexture_createFromFile("Ressources/attack/log_netsoul.png", NULL);
    window->e.s_enemy2.rect = (sfIntRect) {0, 0, 200, 12};
    window->e.s_enemy2.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_enemy2.s, window->e.t_enemy2.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_enemy2.s, window->e.s_enemy2.rect);
    sfSprite_setPosition(window->e.s_enemy2.s, window->e.s_enemy2.posi);
    return;
}

void create_enemy3(basic_struct_t *window)
{
    window->e.s_enemy3.posi = (sfVector2f) {730, 675};
    window->e.t_enemy3.t =
        sfTexture_createFromFile("Ressources/attack/pcube.png", NULL);
    window->e.s_enemy3.rect = (sfIntRect) {0, 0, 200, 14};
    window->e.s_enemy3.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_enemy3.s, window->e.t_enemy3.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_enemy3.s, window->e.s_enemy3.rect);
    sfSprite_setPosition(window->e.s_enemy3.s, window->e.s_enemy3.posi);
    return;
}

void create_enemy4(basic_struct_t *window)
{
    window->e.s_enemy4.posi = (sfVector2f) {1040, 555};
    window->e.t_enemy4.t =
        sfTexture_createFromFile("Ressources/attack/review.png", NULL);
    window->e.s_enemy4.rect = (sfIntRect) {0, 0, 200, 14};
    window->e.s_enemy4.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_enemy4.s, window->e.t_enemy4.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_enemy4.s, window->e.s_enemy4.rect);
    sfSprite_setPosition(window->e.s_enemy4.s, window->e.s_enemy4.posi);
    return;
}

void create_enemy5(basic_struct_t *window)
{
    window->e.s_enemy5.posi = (sfVector2f) {1040, 615};
    window->e.t_enemy5.t =
    sfTexture_createFromFile("Ressources/attack/test_unitaire.png", NULL);
    window->e.s_enemy5.rect = (sfIntRect) {0, 0, 200, 14};
    window->e.s_enemy5.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_enemy5.s, window->e.t_enemy5.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_enemy5.s, window->e.s_enemy5.rect);
    sfSprite_setPosition(window->e.s_enemy5.s, window->e.s_enemy5.posi);
    return;
}
