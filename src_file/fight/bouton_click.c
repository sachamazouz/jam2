/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/

#include "my.h"
#include "rpg.h"

void detect_sound(display_struct_t *d, int i)
{
    if (i == 1)
        sfSound_play(d->sound_a1.sound);
    if (i == 2)
        sfSound_play(d->sound_a2.sound);
    if (i == 3)
        sfSound_play(d->sound_a3.sound);
    if (i == 4)
        sfSound_play(d->sound_a4.sound);
    return;
}

void claque_sound(basic_struct_t *window, display_struct_t *d)
{
    int value = 0;
    int i = 5;

    if (window->first_check == 0) {
        window->first_check = 1;
        printf("remove first click\n");
        return;
    }
    while (value == 0) {
        value = rand() % i;
    }

    detect_sound(d, value);
    window->attack.time = sfClock_getElapsedTime(window->attack.clock);
    while ((window->attack.time.microseconds / 100000) < 40) {
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
    }
    sfClock_restart(window->attack.clock);
}

void click_attack1(basic_struct_t *window, display_struct_t *d)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);

    if ((window->i.attack1 == 0) &&
        (window->event.type == sfEvtMouseButtonPressed)
        && (mouse.x < 1230 && mouse.x > 960)
        && (mouse.y < 870 && mouse.y > 775)) {
        sfRenderWindow_drawSprite(window->window, d->s_hand.s, NULL);
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds / 100000) < 10)
            return;
        claque_sound(window, d);
        window->enemy_life -= 10;
    }
    return;
}

void click_attack2(basic_struct_t *window, display_struct_t *d)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);

    if ((window->i.attack2 == 0) &&
        (window->event.type == sfEvtMouseButtonPressed)
        && (mouse.x < 1660 && mouse.x > 1230)
        && (mouse.y < 870 && mouse.y > 775)) {
        sfRenderWindow_drawSprite(window->window, d->s_hand.s, NULL);
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds / 100000) < 10)
            return;
        claque_sound(window, d);
        window->enemy_life -= 20;
    }
    return;
}

void click_attack3(basic_struct_t *window, display_struct_t *d)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);

    if ((window->i.attack3 == 0) &&
        (window->event.type == sfEvtMouseButtonPressed)
        && (mouse.x < 1560 && mouse.x > 1310)
        && (mouse.y < 770 && mouse.y > 710)) {
        sfRenderWindow_drawSprite(window->window, d->s_hand.s, NULL);
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds / 100000) < 10)
            return;
        claque_sound(window, d);
        window->enemy_life -= 50;
    }
    return;
}

void click_attack4(basic_struct_t *window, display_struct_t *d)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);

    if ((window->i.attack4 == 0) &&
        (window->event.type == sfEvtMouseButtonPressed)
        && (mouse.x < 1860 && mouse.x > 1610)
        && (mouse.y < 770 && mouse.y > 710)) {
        sfRenderWindow_drawSprite(window->window, d->s_hand.s, NULL);
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds / 100000) < 10)
            return;
        claque_sound(window, d);
        window->enemy_life -= 100;
    }
    return;
}

void click_attack5(basic_struct_t *window, display_struct_t *d)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);

    if ((window->i.attack5 == 0) &&
        (window->event.type == sfEvtMouseButtonPressed)
        && (mouse.x < 1225 && mouse.x > 980)
        && (mouse.y < 770 && mouse.y > 710)) {
        sfRenderWindow_drawSprite(window->window, d->s_hand.s, NULL);
        window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds / 100000) < 10)
            return;
        claque_sound(window, d);
        window->enemy_life -= 200;
    }
    return;
}
