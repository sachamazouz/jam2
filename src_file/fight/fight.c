/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "rpg.h"
#include "my.h"

void create_all_buttons(basic_struct_t *window)
{
    create_button1(window);
    create_button2(window);
    create_button3(window);
    create_button4(window);
    create_button5(window);
}

void display_button(basic_struct_t *window)
{
    if (window->i.attack1 == 0)
        sfRenderWindow_drawSprite(window->window, window->e.s_button1.s, NULL);
    if (window->i.attack2 == 0)
        sfRenderWindow_drawSprite(window->window, window->e.s_button2.s, NULL);
    if (window->i.attack3 == 0)
        sfRenderWindow_drawSprite(window->window, window->e.s_button3.s, NULL);
    if (window->i.attack4 == 0)
        sfRenderWindow_drawSprite(window->window, window->e.s_button4.s, NULL);
    if (window->i.attack5 == 0)
        sfRenderWindow_drawSprite(window->window, window->e.s_button5.s, NULL);
}

void detect_ennemy(basic_struct_t *window)
{
    if (window->enemy_value == 1 && window->enemy_life == 0)
        action_fight1(window);
    if (window->enemy_value == 2 && window->enemy_life == 0)
        action_fight2(window);
    if (window->enemy_value == 3 && window->enemy_life == 0)
        action_fight3(window);
    if (window->enemy_value == 4 && window->enemy_life == 0)
        action_fight4(window);
    if (window->enemy_value == 5 && window->enemy_life == 0)
        action_fight5(window);
}

void launch_combat(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(window->window, window->e.s_wal.s, NULL);
    sfRenderWindow_drawSprite(window->window,
                              sprite_struct->s_enemy_fight.s, NULL);
    sfRenderWindow_drawSprite(window->window,
                              sprite_struct->s_face_fight.s, NULL);
    sfRenderWindow_drawSprite(window->window,
                              sprite_struct->s_perso_fight.s, NULL);
    display_button(window);
    sfRenderWindow_drawText(window->window, window->text.text, NULL);
    sfRenderWindow_drawText(window->window, window->text1.text, NULL);
}

void fight(basic_struct_t *window, display_struct_t *sprite_struct)
{
    create_enemy_life(window);
    echap(window);
    detect_ennemy(window);
    init_face(sprite_struct);
    launch_combat(window, sprite_struct);
    all_clicks_fight(window, sprite_struct);
    if (window->score > 1 && window->enemy_life <= 0) {
        window->nb_switcher = 3;
        window->enemy_life = 0;
        sfSound_play(sprite_struct->sound.sound);
    }
    if (window->score == 6 && window->enemy_life == 0)
        window->nb_switcher = 4;
}
