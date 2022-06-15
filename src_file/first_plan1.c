/*
** EPITECH PROJECT, 2022
** first_plan
** File description:
** first_plan
*/
#include "rpg.h"
#include "my.h"

void create_tuto_text(display_struct_t *s)
{
    s->tuto_name.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->tuto_name.text = sfText_create();
    sfText_setFont(s->tuto_name.text,
    s->tuto_name.font);
    sfText_setCharacterSize(s->tuto_name.text, 55);
    sfText_setString(s->tuto_name.text,
    "To play, move yourself accross the map , throw a \n\nstink ball by "
    "clicking on window\n\n"
    "if u touch a member of your family , "
    "he's gonna appear\n\n becareful"
    "you have 35 stink ball to use!\n\nENJOY");
    sfText_setColor(s->tuto_name.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(s->tuto_name.text, (sfVector2f) {50, 100});
}

void create_return(display_struct_t *s)
{
    s->s_return.posi = (sfVector2f) {1500, 800};
    s->t_return.t = sfTexture_createFromFile("Ressources/return.png", NULL);
    s->s_return.rect = (sfIntRect) {8, 0, 100, 70};
    s->s_return.s = sfSprite_create();
    sfSprite_setTexture(s->s_return.s, s->t_return.t, sfTrue);
    sfSprite_setTextureRect(s->s_return.s, s->s_return.rect);
    sfSprite_setPosition(s->s_return.s, s->s_return.posi);
}
