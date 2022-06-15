/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "my.h"
#include "rpg.h"

void all_clicks_fight(basic_struct_t *window, display_struct_t *t)
{
    click_attack1(window, t);
    click_attack2(window, t);
    click_attack3(window, t);
    click_attack4(window, t);
    click_attack5(window, t);
}

void action_fight1(basic_struct_t *window)
{
    window->enemy_life = 30;
    window->enemy_value = 2;
    window->score = window->enemy_value;
    window->i.key1 = 0;
}

void action_fight2(basic_struct_t *window)
{
    window->enemy_life = 200;
    window->enemy_value = 3;
    window->score = window->enemy_value;
    window->i.key2 = 0;
    window->i.attack2 = 0;
    window->i.attack3 = 0;
}

void action_fight3(basic_struct_t *window)
{
    window->enemy_life = 400;
    window->enemy_value = 4;
    window->score = window->enemy_value;
    window->i.key3 = 0;
    window->i.attack4 = 0;
}

void action_fight4(basic_struct_t *window)
{
    window->enemy_life = 600;
    window->enemy_value = 5;
    window->score = window->enemy_value;
    window->i.key4 = 0;
    window->i.attack5 = 0;
}

void action_fight5(basic_struct_t *window)
{
    window->enemy_life = 1000;
    window->enemy_value = 6;
    window->score = window->enemy_value;
    window->i.key5 = 0;
}
