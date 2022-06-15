/*
** EPITECH PROJECT, 2022
** invetory.c
** File description:
** inventory display
*/
#include "rpg.h"
#include "my.h"

void complete_inventory(basic_struct_t *window)
{
    window->first_check = 0;
    window->our_life = 1000;
    window->enemy_life = 0;
    window->enemy_value = 1;
    window->i.attack1 = 0;
    window->i.attack2 = 1;
    window->i.attack3 = 1;
    window->i.attack4 = 1;
    window->i.attack5 = 1;
    window->i.key1 = 1;
    window->i.key2 = 1;
    window->i.key3 = 1;
    window->i.key4 = 1;
    window->i.key5 = 1;
    return;
}

void check_key(basic_struct_t *window)
{
    if (!window->i.key1)
        sfRenderWindow_drawSprite(window->window, window->i.skey1.s, NULL);
    if (window->i.key2 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.skey2.s, NULL);
    if (window->i.key3 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.skey3.s, NULL);
    if (window->i.key4 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.skey4.s, NULL);
    if (window->i.key5 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.skey5.s, NULL);
    return;
}

void check_inventory_content(basic_struct_t *window)
{
    if (window->i.attack1 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.sattack1.s, NULL);
    if (window->i.attack2 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.sattack2.s, NULL);
    if (window->i.attack3 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.sattack3.s, NULL);
    if (window->i.attack4 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.sattack4.s, NULL);
    if (window->i.attack5 == 0)
        sfRenderWindow_drawSprite(window->window, window->i.sattack5.s, NULL);
    check_key(window);
    return;
}

void create_sinventory(display_struct_t *sprite_struct)
{
    sprite_struct->s_inventory.posi = (sfVector2f) {700, 250};
    sprite_struct->t_inventory.t =
        sfTexture_createFromFile("Ressources/inventaire.png", NULL);
    sprite_struct->s_inventory.rect = (sfIntRect) {0, 0, 600, 560};
    sprite_struct->s_inventory.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_inventory.s,
                        sprite_struct->t_inventory.t, sfTrue);
    sfSprite_setTextureRect(sprite_struct->s_inventory.s,
                            sprite_struct->s_inventory.rect);
    sfSprite_setPosition(sprite_struct->s_inventory.s,
                         sprite_struct->s_inventory.posi);
}

void inventory_display(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sprite_struct->s_tonyface.posi = (sfVector2f) {950, 300};
    sfSprite_setPosition(sprite_struct->s_tonyface.s,
                         sprite_struct->s_tonyface.posi);
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        create_sinventory(sprite_struct);
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_inventory.s, NULL);
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_tonyface.s, NULL);
        sfRenderWindow_drawSprite(window->window,
                                  window->i.sprison.s, NULL);
        check_inventory_content(window);
    }
    return;
}
