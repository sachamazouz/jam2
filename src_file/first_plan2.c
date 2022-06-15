/*
** EPITECH PROJECT, 2022
** first_plan
** File description:
** first_plan
*/
#include "rpg.h"
#include "my.h"

void m_scale(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfVector2f scales = {1.5, 1.5};
    sfVector2f scale = {1, 1};

    if ( mouse.x < 730 && mouse.x > 300 &&
        mouse.y < 320 && mouse.y > 260)
        sfSprite_setScale(sprite_struct->s_continue.s, scales);
    else
        sfSprite_setScale(sprite_struct->s_continue.s, scale);
    if (mouse.x < 1460 && mouse.x > 1200 &&
        mouse.y < 450 && mouse.y > 400)
        sfSprite_setScale(sprite_struct->s_homeb.s, scales);
    else
        sfSprite_setScale(sprite_struct->s_homeb.s, scale);
}

void get_click_pause(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);

    m_scale(basic, sprite_struct);
    if ((basic->event.type == sfEvtMouseButtonPressed)
        && mouse.x < 730 && mouse.x > 300 &&
        mouse.y < 320 && mouse.y > 260)
        basic->nb_switcher = 3;
    if ((basic->event.type == sfEvtMouseButtonPressed)
        && mouse.x < 1460 && mouse.x > 1200 &&
        mouse.y < 450 && mouse.y > 400)
        basic->nb_switcher = 1;
    if ((basic->event.type == sfEvtMouseButtonPressed)
        && mouse.x < 805 && mouse.x > 560 &&
        mouse.y < 610 && mouse.y > 315)
        sfRenderWindow_close(basic->window);
}

int display_tuto(basic_struct_t *basic, display_struct_t *sprite_s)
{
    basic->posi_mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfRenderWindow_drawSprite(basic->window, sprite_s->shome.s, NULL);
    sfRenderWindow_drawText(basic->window, sprite_s->tuto_name.text, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_s->s_return.s, NULL);
    get_return_click(basic);
    echap(basic);
    return 0;
}

void get_return_click(basic_struct_t *basic)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);

    if ((basic->event.type == sfEvtMouseButtonPressed)
        && mouse.x < 1550 && mouse.x > 1500 &&
        mouse.y < 860 && mouse.y > 800)
        basic->nb_switcher = 1;
}
