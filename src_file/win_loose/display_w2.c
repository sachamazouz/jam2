/*
** EPITECH PROJECT, 2022
** rpg project
** File description:
** display_w2
*/

#include "my.h"
#include "rpg.h"

void open_coffre2(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if (window->open_coffre == 1) {
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_exit3.s, NULL);
        if ((window->event.type == sfEvtMouseButtonPressed) &&
            window->posi_mouse.x > sprite_struct->s_exit3.posi.x &&
            window->posi_mouse.x < sprite_struct->s_exit3.posi.x + 600 &&
            window->posi_mouse.y > sprite_struct->s_exit3.posi.y &&
            window->posi_mouse.y < sprite_struct->s_exit3.posi.y + 300)
            sfRenderWindow_close(window->window);
    }
}

void open_coffre(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if (window->click_key_5 == 1 && window->click_key_4 == 1
        &&window->click_key_3 == 1 && window->click_key_2 == 1
        && window->click_key_1 == 1) {
        sprite_struct->s_tonyface.posi = (sfVector2f) {1340, 200};
        sfSprite_setPosition(sprite_struct->s_tonyface.s,
        sprite_struct->s_tonyface.posi);
        sprite_struct->s_coffre.rect = (sfIntRect) {180, 0, 180, 230};;
        sfSprite_setTextureRect(sprite_struct->s_coffre.s,
        sprite_struct->s_coffre.rect);
        sfRenderWindow_drawText(window->window,
        sprite_struct->save_tony.text, NULL);
        sprite_struct->s_tonyface.posi = (sfVector2f) {1370, 430};
        sfSprite_setPosition(sprite_struct->s_tonyface.s,
        sprite_struct->s_tonyface.posi);
        sfRenderWindow_drawSprite(window->window,
        sprite_struct->s_tonyface.s, NULL);
        window->open_coffre = 1;
    }
    open_coffre2(window, sprite_struct);
}

void close_coffre(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if (window->open_coffre != 1) {

        sprite_struct->s_tonyface.posi = (sfVector2f) {950 - 400, 300 - 100};
        sfSprite_setPosition(sprite_struct->s_tonyface.s,
                             sprite_struct->s_tonyface.posi);
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_inventory.s, NULL);
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_tonyface.s, NULL);
        sfRenderWindow_drawSprite(window->window,
                                  window->i.sprison.s, NULL);
    }
}

void display_win(basic_struct_t *window, display_struct_t *sprite_struct)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    create_sinventory(sprite_struct);
    init_inventory_end(window, sprite_struct);
    click_key(window);
    sfRenderWindow_drawSprite(window->window, sprite_struct->s_fond_w.s, NULL);
        sfRenderWindow_drawSprite(window->window,
                                  sprite_struct->s_coffre.s, NULL);
        open_coffre(window, sprite_struct);
    close_coffre(window, sprite_struct);
    draw_end(window);
    return;
}
