/*
** EPITECH PROJECT, 2022
** dw
** File description:
** display_winn
*/
#include "my.h"
#include "rpg.h"

void init_inventory_end(basic_struct_t *window, display_struct_t *sprite_struct)
{
    window->i.skey1.posi = (sfVector2f) {715 - 400, 720 - 100};
    window->i.skey2.posi = (sfVector2f) {780 - 400, 720 - 100};
    window->i.skey3.posi = (sfVector2f) {840 - 400, 720 - 100};
    window->i.skey4.posi = (sfVector2f) {900 - 400, 720 - 100};
    window->i.skey5.posi = (sfVector2f) {965 - 400, 720 - 100};
    sprite_struct->s_inventory.posi = (sfVector2f) {700 - 400, 250 - 100};
    window->i.sprison.posi = (sfVector2f) {895 - 400, 295- 100};
    sfSprite_setPosition(window->i.sprison.s, window->i.sprison.posi);
    sfSprite_setPosition(window->i.skey1.s, window->i.skey1.posi);
    sfSprite_setPosition(window->i.skey2.s, window->i.skey2.posi);
    sfSprite_setPosition(window->i.skey3.s, window->i.skey3.posi);
    sfSprite_setPosition(window->i.skey4.s, window->i.skey4.posi);
    sfSprite_setPosition(window->i.skey5.s, window->i.skey5.posi);
    sfSprite_setPosition(sprite_struct->s_inventory.s,
                         sprite_struct->s_inventory.posi);
}

void draw_end(basic_struct_t *window)
{
    if (window->click_key_1 != 1)
        sfRenderWindow_drawSprite(window->window, window->i.skey1.s, NULL);
    if (window->click_key_2 != 1)
        sfRenderWindow_drawSprite(window->window, window->i.skey2.s, NULL);
    if (window->click_key_3 != 1)
        sfRenderWindow_drawSprite(window->window, window->i.skey3.s, NULL);
    if (window->click_key_4 != 1)
        sfRenderWindow_drawSprite(window->window, window->i.skey4.s, NULL);
    if (window->click_key_5 != 1)
        sfRenderWindow_drawSprite(window->window, window->i.skey5.s, NULL);
}

void click_key2(basic_struct_t *window)
{
    if ((window->event.type == sfEvtMouseButtonPressed) &&
        (window->posi_mouse.x > window->i.skey4.posi.x &&
         window->posi_mouse.x < window->i.skey4.posi.x + 100 &&
         window->posi_mouse.y > window->i.skey4.posi.y &&
         window->posi_mouse.y < window->i.skey4.posi.y + 100) )
        window->click_key_4 = 1;
    if ((window->event.type == sfEvtMouseButtonPressed) &&
        (window->posi_mouse.x > window->i.skey5.posi.x &&
         window->posi_mouse.x < window->i.skey5.posi.x + 100 &&
         window->posi_mouse.y > window->i.skey5.posi.y &&
         window->posi_mouse.y < window->i.skey5.posi.y + 100) )
        window->click_key_5 = 1;
}

void click_key(basic_struct_t *window)
{
    if ((window->event.type == sfEvtMouseButtonPressed) &&
        (window->posi_mouse.x > window->i.skey1.posi.x &&
         window->posi_mouse.x < window->i.skey1.posi.x + 100 &&
         window->posi_mouse.y > window->i.skey1.posi.y &&
         window->posi_mouse.y < window->i.skey1.posi.y + 100))
        window->click_key_1 = 1;
    if ((window->event.type == sfEvtMouseButtonPressed) &&
        (window->posi_mouse.x > window->i.skey2.posi.x &&
         window->posi_mouse.x < window->i.skey2.posi.x + 100 &&
         window->posi_mouse.y > window->i.skey2.posi.y &&
         window->posi_mouse.y < window->i.skey2.posi.y + 100) )
        window->click_key_2 = 1;
    if ((window->event.type == sfEvtMouseButtonPressed) &&
        (window->posi_mouse.x > window->i.skey3.posi.x &&
         window->posi_mouse.x < window->i.skey3.posi.x + 100 &&
         window->posi_mouse.y > window->i.skey3.posi.y &&
         window->posi_mouse.y < window->i.skey3.posi.y + 100) )
        window->click_key_3 = 1;
    click_key2(window);
}
