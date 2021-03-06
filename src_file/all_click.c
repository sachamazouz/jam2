/*
** EPITECH PROJECT, 2022
** all_click_each_scene
** File description:
** all_click_each_scene
*/
#include "rpg.h"
#include "my.h"

void manageoptions(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(sprite_struct->s_option.s);
    
    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y) &&
         basic->event.type == sfEvtMouseButtonPressed) {
        basic->nb_switcher = 2;
    }
}

void exit_nb_switcher1(basic_struct_t *basic, display_struct_t *sprite_s)
{
    if ((basic->event.type == sfEvtMouseButtonPressed) &&
        (basic->posi_mouse.x > sprite_s->s_exit.posi.x &&
         basic->posi_mouse.x < sprite_s->s_exit.posi.x + 510
         && basic->posi_mouse.y > sprite_s->s_exit.posi.y &&
         basic->posi_mouse.y < sprite_s->s_exit.posi.y + 70))
        sfRenderWindow_close(basic->window);
}

void start_nb_switcher1(basic_struct_t *basic, display_struct_t *sprite_s)
{
    if ((basic->event.type == sfEvtMouseButtonPressed) &&
        (basic->posi_mouse.x > sprite_s->s_start.posi.x &&
         basic->posi_mouse.x < sprite_s->s_start.posi.x + 605 &&
         basic->posi_mouse.y > sprite_s->s_start.posi.y &&
         basic->posi_mouse.y < sprite_s->s_start.posi.y + 70))
        basic->nb_switcher = 3;
    manageoptions(basic, sprite_s);

}

void tuto_nb_switcher(basic_struct_t *basic)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(basic->window);

    if ((basic->event.type == sfEvtMouseButtonPressed)
    && mouse.x < 1890 && mouse.x > 1050 &&
    mouse.y < 660 && mouse.y > 600)
        basic->nb_switcher = 7;
}

void set_easy(display_struct_t *sprite_s)
{
    sprite_s->s_easy.posi = (sfVector2f) {700, 200};
    sprite_s->s_easy.rect = (sfIntRect) {0, 0, 600, 600};
    sprite_s->s_easy.s = sfSprite_create();
    sprite_s->t_easy.t = sfTexture_createFromFile("Ressources/Easy.png", NULL);
    sfSprite_setTexture(sprite_s->s_easy.s, sprite_s->t_easy.t, sfTrue);
    sfSprite_setTextureRect(sprite_s->s_easy.s, sprite_s->s_easy.rect);
    sfSprite_setPosition(sprite_s->s_easy.s, sprite_s->s_easy.posi);
}

int display_easy(basic_struct_t *basic, display_struct_t *sprite_s)
{
    basic->posi_mouse = sfMouse_getPositionRenderWindow(basic->window);
    sfRenderWindow_drawSprite(basic->window, sprite_s->shome.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_s->s_easy.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_s->s_cave.s, NULL);
    click_easy(basic, sprite_s);

    return 0;
}

int click_easy(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if ((window->event.type == sfEvtMouseButtonPressed) &&
    (window->posi_mouse.x > sprite_struct->s_easy.posi.x &&
    window->posi_mouse.x < sprite_struct->s_easy.posi.x + 600 &&
    window->posi_mouse.y > sprite_struct->s_easy.posi.y &&
    window->posi_mouse.y < sprite_struct->s_easy.posi.y + 600)) {
        window->speed = 20;
        window->speed_obstacle = -30;
        window->nb_switcher = 3;
    }
    return 0;
}

void jam_validation(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(window->window, sprite_struct->s_validation.s, NULL);
    sfRenderWindow_drawText(window->window, sprite_struct->validation.text, NULL);
    sfRenderWindow_drawText(window->window, sprite_struct->validation_yes.text, NULL);
    sfRenderWindow_drawText(window->window, sprite_struct->validation_no.text, NULL);


    sprite_struct->clock.time = sfClock_getElapsedTime(sprite_struct->clock.clock);
    sprite_struct->seconds = sprite_struct->clock.time.microseconds / 1000000.0;

    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    if ((window->event.type == sfEvtMouseButtonPressed) &&
    (window->posi_mouse.x > 600 && window->posi_mouse.x < 740
    && window->posi_mouse.y > 590 && window->posi_mouse.y < 650))
        sfRenderWindow_drawText(window->window, sprite_struct->validation_yesmerci.text, NULL);
    if ((window->event.type == sfEvtMouseButtonPressed) &&
    (window->posi_mouse.x > 1300 && window->posi_mouse.x < 1420
    && window->posi_mouse.y > 590 && window->posi_mouse.y < 650))
        sprite_struct->debug = 1;
        if (sprite_struct->debug2 == 0) {
            sfClock_restart(sprite_struct->clock.clock);
            sprite_struct->debug2 = 1;
        }
        if (sprite_struct->debug == 1 && sprite_struct->seconds < 6)
            sfRenderWindow_drawText(window->window, sprite_struct->validation_nor.text, NULL);
        if (sprite_struct->debug == 1 && sprite_struct->seconds >= 6) {
            sprite_struct->debug = 0;
            sprite_struct->debug2 = 0;
            sfClock_restart(sprite_struct->clock.clock);
        }
    echap2(window);
}

void echap(basic_struct_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyX))
        sfRenderWindow_close(window->window);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && window->nb_switcher == 3)
        window->nb_switcher = 8;
    if (sfKeyboard_isKeyPressed(sfKeyP))
        window->nb_switcher = 9;
}


void echap2(basic_struct_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        sfRenderWindow_close(window->window);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) && window->nb_switcher == 3)
        window->nb_switcher = 8;
}