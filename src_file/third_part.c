/*
** EPITECH PROJECT, 2022
** last_switch
** File description:
** last_switch
*/
#include "rpg.h"
#include "my.h"

void enemyinit(display_struct_t *sprite_struct)
{
    sprite_struct->detect_fight1 = 0;
    sprite_struct->detect_fight2 = 0;
    sprite_struct->detect_fight3 = 0;
    sprite_struct->detect_fight4 = 0;
    sprite_struct->detect_fight5 = 0;
    enemyinit1(sprite_struct);
    enemyinit2(sprite_struct);
    enemyinit3(sprite_struct);
    enemyinit4(sprite_struct);
    enemyinit5(sprite_struct);
}

int create_perso(display_struct_t *sprite_struct)
{
    int debug = 1;

    sprite_struct->a.s_main.posi = (sfVector2f) {860, 400};
    sprite_struct->a.t_main.t =
    sfTexture_createFromFile("Ressources/main.png", NULL);
    sprite_struct->a.s_main.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.s_main.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_main.s,
    sprite_struct->a.t_main.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_main.s,
    sprite_struct->a.s_main.posi);

    return debug;
}


void create_sound(display_struct_t *sound)
{
    sound->sound.buffer = sfSoundBuffer_createFromFile("Ressources/Jump.ogg");
    sound->sound.sound = sfSound_create();
    sfSound_setBuffer(sound->sound.sound, sound->sound.buffer);
}
