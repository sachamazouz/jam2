/*
** EPITECH PROJECT, 2022
** first_plan
** File description:
** first_plan
*/
#include "rpg.h"
#include "my.h"

void play_music(display_struct_t *s, basic_struct_t *window)
{
    if (window->caver_enter == 0)
        sfMusic_pause(s->music_game.music);
    if (window->caver_enter == 1) {
        sfMusic_setLoop(s->music_game.music, sfTrue);
        sfMusic_play(s->music_game.music);
        sfMusic_setVolume(s->music_game.music, 30);
    }
}

void mangascalex(display_struct_t *s, basic_struct_t window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window.window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(s->s_exit.s);
    sfVector2f scale;
    sfVector2f scales;

    printf("position de x est %d\n" ,mouse.x);
    printf("position de y est %d\n" ,mouse.y);
    scale.x = 1.5;
    scale.y = 1.5;
    scales.x = 1;
    scales.y = 1;
    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y)) {
        sfSprite_setScale(s->s_exit.s ,scale);
    }
    else
        sfSprite_setScale(s->s_exit.s ,scales);
}

//hauteur -610 - -755
//largeut -1320

void mangascale(display_struct_t *s, basic_struct_t window)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window.window);
    sfFloatRect carrx = sfSprite_getGlobalBounds(s->s_start.s);
    sfVector2f scale;
    sfVector2f scales;

    scale.x = 1.5;
    scale.y = 1.5;
    scales.x = 1;
    scales.y = 1;
    if  (sfFloatRect_contains(&carrx, mouse.x, mouse.y)) {
        sfSprite_setScale(s->s_start.s ,scale);
    }
    else
        sfSprite_setScale(s->s_start.s ,scales);
}

void mangascales(display_struct_t *s, basic_struct_t window)
{
    mangascale(s,window);
    mangascalex(s,window);
}

void nb_switcher(basic_struct_t *window, display_struct_t *s)
{
    window->nb_switcher = 1;
    window->speed = 0;
    window->score = 1;
    window->obstacle = 1;
    s->space = 1;
    s->clock.clock = sfClock_create();
    s->clock2.clock = sfClock_create();
    window->attack.clock = sfClock_create();
    play_music(s ,window);
    s->frame = 60;
    sfRenderWindow_setFramerateLimit(window->window, s->frame);
}

void nb_switcher_one(basic_struct_t window, display_struct_t s, enemy_pos_t array)
{
    nb_switcher(&window, &s);
    while (sfRenderWindow_isOpen(window.window)) {
        sfRenderWindow_clear(window.window, sfBlack);
        for (; (sfRenderWindow_pollEvent(window.window, &window.event)
                != sfFalse)
                 && (window.event.type == sfEvtClosed);
             sfRenderWindow_close(window.window)) {
        }
        mainer_supply(&window, &s, &array);
        mangascales(&s,window);
        sfRenderWindow_display(window.window);
    }
    destroy(&window, &s);
}
