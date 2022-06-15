/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "my.h"

void create_button1(basic_struct_t *window)
{
    window->e.s_button1.posi = (sfVector2f) {900, 760};
    window->e.t_button1.t =
        sfTexture_createFromFile(
            "Ressources/attack_button/all_butons.png", NULL);
    window->e.s_button1.rect = (sfIntRect) {0, 110, 420, 110};
    window->e.s_button1.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_button1.s, window->e.t_button1.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_button1.s, window->e.s_button1.rect);
    sfSprite_setPosition(window->e.s_button1.s, window->e.s_button1.posi);
    return;
}

void create_button2(basic_struct_t *window)
{
       window->e.s_button2.posi = (sfVector2f) {1270, 760};
    window->e.t_button2.t =
        sfTexture_createFromFile(
            "Ressources/attack_button/all_butons.png", NULL);
    window->e.s_button2.rect = (sfIntRect) {420, 112, 840, 110};
    window->e.s_button2.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_button2.s, window->e.t_button2.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_button2.s, window->e.s_button2.rect);
    sfSprite_setPosition(window->e.s_button2.s, window->e.s_button2.posi);
    return;
}

void create_button3(basic_struct_t *window)
{
    window->e.s_button3.posi = (sfVector2f) {1200, 655};
    window->e.t_button3.t =
        sfTexture_createFromFile(
            "Ressources/attack_button/all_butons.png", NULL);
    window->e.s_button3.rect = (sfIntRect) {350, 0, 950, 110};
    window->e.s_button3.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_button3.s, window->e.t_button3.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_button3.s, window->e.s_button3.rect);
    sfSprite_setPosition(window->e.s_button3.s, window->e.s_button3.posi);
    return;
}

void create_button4(basic_struct_t *window)
{
    window->e.s_button4.posi = (sfVector2f) {1535, 665};
    window->e.t_button4.t =
        sfTexture_createFromFile(
            "Ressources/attack_button/all_butons.png", NULL);
    window->e.s_button4.rect = (sfIntRect) {0, 220, 420, 110};
    window->e.s_button4.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_button4.s, window->e.t_button4.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_button4.s, window->e.s_button4.rect);
    sfSprite_setPosition(window->e.s_button4.s, window->e.s_button4.posi);
    return;
}

void create_button5(basic_struct_t *window)
{
      window->e.s_button5.posi = (sfVector2f) {900, 655};
    window->e.t_button5.t =
        sfTexture_createFromFile(
            "Ressources/attack_button/all_butons.png", NULL);
    window->e.s_button5.rect = (sfIntRect) {0, 0, 350, 110};
    window->e.s_button5.s = sfSprite_create();
    sfSprite_setTexture(window->e.s_button5.s, window->e.t_button5.t, sfTrue);
    sfSprite_setTextureRect(window->e.s_button5.s, window->e.s_button5.rect);
    sfSprite_setPosition(window->e.s_button5.s, window->e.s_button5.posi);
    return;
}
