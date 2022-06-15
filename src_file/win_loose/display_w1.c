/*
** EPITECH PROJECT, 2022
** epitech rpg
** File description:
** dislay w 2
*/

#include "my.h"
#include "rpg.h"

void init_text_end(display_struct_t *sprite_struct)
{
    sprite_struct->save_tony.font = sfFont_createFromFile(
        "Ressources/zorque.otf");
    sprite_struct->save_tony.text = sfText_create();
    sfText_setFont(sprite_struct->save_tony.text,
                   sprite_struct->save_tony.font);
    sfText_setCharacterSize(sprite_struct->save_tony.text, 100);
    sfText_setString(sprite_struct->save_tony.text,
                     "Congratulations ,you saved Tony!");
    sfText_setColor(sprite_struct->save_tony.text, sfYellow);
    sfText_setPosition(sprite_struct->save_tony.text, (sfVector2f) {10, 20});
}

void init_sprite_end(display_struct_t *sprite_struct)
{
    sprite_struct->s_fond_w.s = sfSprite_create();
    sprite_struct->s_coffre.s = sfSprite_create();
    sprite_struct->s_tonyface.s = sfSprite_create();
    sprite_struct->t_tonyface.t =
        sfTexture_createFromFile("Ressources/tony.png", NULL);
    sprite_struct->t_fond_w.t =
        sfTexture_createFromFile("Ressources/fond_win.png", NULL);
    sprite_struct->t_coffre.t =
        sfTexture_createFromFile("Ressources/coffre.png", NULL);
    sprite_struct->s_coffre.rect = (sfIntRect) {0, 0, 180, 230};
    sprite_struct->s_coffre.posi = (sfVector2f) {1300, 350};
}

void create_win(display_struct_t *sprite_struct)
{
    sfVector2f size_coffre = {1.8, 1.8};
    sfVector2f size_tony = {2.3, 2.3};

    init_text_end(sprite_struct);
    init_sprite_end(sprite_struct);
    sfSprite_setTexture(sprite_struct->s_tonyface.s,
                        sprite_struct->t_tonyface.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_coffre.s,
                        sprite_struct->t_coffre.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_fond_w.s,
                        sprite_struct->t_fond_w.t, sfFalse);
    sfSprite_setPosition(sprite_struct->s_coffre.s,
                         sprite_struct->s_coffre.posi);
    sfSprite_setTextureRect(sprite_struct->s_coffre.s,
                            sprite_struct->s_coffre.rect);
    sfSprite_setScale(sprite_struct->s_coffre.s, size_coffre);
    sfSprite_setScale(sprite_struct->s_tonyface.s, size_tony);
}
