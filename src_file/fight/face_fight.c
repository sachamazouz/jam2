/*
** EPITECH PROJECT, 2022
** rpg priject
** File description:
** face fight
*/
#include "rpg.h"
#include "my.h"

void init_face_cond1(display_struct_t *sprite_struct)
{
    sfVector2f x;

    if (sprite_struct->what_face == 1) {
        sprite_struct->s_face_fight.posi = (sfVector2f) {1480, 285};
        sprite_struct->t_face_fight.t =
            sfTexture_createFromFile("Ressources/alexandra.png", NULL);
        x = (sfVector2f) {0.4, 0.4};
        sfSprite_setScale(sprite_struct->s_face_fight.s, x);
    }
    if (sprite_struct->what_face == 2) {
        sprite_struct->t_face_fight.t =
            sfTexture_createFromFile("Ressources/leandre.png", NULL);
        sprite_struct->s_face_fight.posi = (sfVector2f) {1467, 268};
        x = (sfVector2f) {0.4, 0.4};
        sfSprite_setScale(sprite_struct->s_face_fight.s, x);
    }
}

void init_face_cond2(display_struct_t *sprite_struct)
{
    sfVector2f x;

    if (sprite_struct->what_face == 3) {
        sprite_struct->t_face_fight.t =
            sfTexture_createFromFile("Ressources/ilias.png", NULL);
        sprite_struct->s_face_fight.posi = (sfVector2f) {1484, 275};
        x = (sfVector2f) {0.4, 0.4};
        sfSprite_setScale(sprite_struct->s_face_fight.s, x);
    }
}

void init_face_cond3(display_struct_t *sprite_struct)
{
    sfVector2f x;

    if (sprite_struct->what_face == 4) {
        sprite_struct->t_face_fight.t =
            sfTexture_createFromFile("Ressources/najib.png", NULL);
        sprite_struct->s_face_fight.posi = (sfVector2f) {1480, 315};
        x = (sfVector2f) {0.58, 0.58};
        sfSprite_setScale(sprite_struct->s_face_fight.s, x);
    }
    if (sprite_struct->what_face == 5) {
        sprite_struct->t_face_fight.t =
            sfTexture_createFromFile("Ressources/emeric.png", NULL);
        sprite_struct->s_face_fight.posi = (sfVector2f) {1475, 284};
        x = (sfVector2f) {1.3, 1.3};
        sfSprite_setScale(sprite_struct->s_face_fight.s, x);
    }
}

void init_face(display_struct_t *sprite_struct)
{
    sprite_struct->s_face_fight.s = sfSprite_create();
    init_face_cond1(sprite_struct);
    init_face_cond2(sprite_struct);
    init_face_cond3(sprite_struct);
    sfSprite_setTexture(sprite_struct->s_face_fight.s,
                        sprite_struct->t_face_fight.t, sfFalse);
    sfSprite_setPosition(sprite_struct->s_face_fight.s,
                         sprite_struct->s_face_fight.posi);
}
