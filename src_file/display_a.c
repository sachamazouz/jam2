/*
** EPITECH PROJECT, 2022
** create_window
** File description:
** create_window
*/
#include "rpg.h"
#include "my.h"

void create_a(display_struct_t *s)
{
    s->s_abutton.posi = (sfVector2f) {300, 800};
    s->t_abutton.t = sfTexture_createFromFile("Ressources/a_fight.png", NULL);
    s->s_abutton.rect = (sfIntRect) {0, 0, 1899, 55};
    s->s_abutton.s = sfSprite_create();
    sfSprite_setTexture(s->s_abutton.s, s->t_abutton.t, sfTrue);
    sfSprite_setTextureRect(s->s_abutton.s, s->s_abutton.rect);
    sfSprite_setPosition(s->s_abutton.s, s->s_abutton.posi);
}
