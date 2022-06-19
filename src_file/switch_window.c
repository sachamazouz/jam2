/*
** EPITECH PROJECT, 2022
** peitech rpg
** File description:
** switch window
*/

#include "rpg.h"
#include "my.h"

void mainer_supply2(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    if (window->nb_switcher == 5)
        display_loose(window, sprite_struct);
    if (window->nb_switcher == 4)
        display_win(window, sprite_struct);
    if (window->nb_switcher == 3)
        display_game(window, sprite_struct, array);
    if (window->nb_switcher == 2)
        display_menu(window, sprite_struct);
}

void mainer_supply3(basic_struct_t *window, display_struct_t *sprite_struct)
{
    if (window->nb_switcher == 1)
        draw(window, sprite_struct);
}

void mainer_supply(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    if (window->nb_switcher == 9)
        jam_validation(window, sprite_struct);
    if (window->nb_switcher == 8)
        display_pause(window, sprite_struct);
    if (window->nb_switcher == 7)
        display_tuto(window, sprite_struct);
    if (window->nb_switcher == 6) {
        change_life(window, sprite_struct);
        fight(window, sprite_struct);
    }
    if (window->nb_switcher == 1)
        draw(window, sprite_struct);
    mainer_supply2(window, sprite_struct, array);
    mainer_supply3(window, sprite_struct);
}
