/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "my.h"
#include "rpg.h"

void create_wal_fight(basic_struct_t *window, display_struct_t *s)
{
    window->e.t_wal.t =
        sfTexture_createFromFile("Ressources/fond_combat.png", NULL);
    window->e.s_wal.s = sfSprite_create();
    s->s_enemy_fight.s = sfSprite_create();
    s->t_enemy_fight.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    s->s_perso_fight.s = sfSprite_create();
    s->t_perso_fight.t =
        sfTexture_createFromFile("Ressources/main.png", NULL);
    s->s_perso_fight.rect = (sfIntRect) {0, 130, 180, 125};
    s->s_enemy_fight.posi = (sfVector2f) {1400, 290};
    s->s_enemy_fight.rect = (sfIntRect) {0, 0, 180, 290};
    s->s_perso_fight.posi = (sfVector2f) {245, 550};
    set_walts(window, s);
    create_my_windows(window);
    create_background_game(s, "Ressources/map.png");
}

void set_walts(basic_struct_t *window, display_struct_t *s)
{
    sfVector2f x = {1.2 ,1.2};
    sfVector2f y = {3 ,3.8};

    sfSprite_setTexture(window->e.s_wal.s, window->e.t_wal.t, sfTrue);
    sfSprite_setTexture(s->s_enemy_fight.s, s->t_enemy_fight.t, sfTrue);
    sfSprite_setTexture(s->s_perso_fight.s, s->t_perso_fight.t, sfTrue);
    sfSprite_setTextureRect(s->s_enemy_fight.s, s->s_enemy_fight.rect);
    sfSprite_setTextureRect(s->s_perso_fight.s, s->s_perso_fight.rect);
    sfSprite_setPosition(s->s_enemy_fight.s, s->s_enemy_fight.posi);
    sfSprite_setPosition(s->s_perso_fight.s, s->s_perso_fight.posi);
    sfSprite_setScale(s->s_enemy_fight.s, x);
    sfSprite_setScale(s->s_perso_fight.s, y);
}
