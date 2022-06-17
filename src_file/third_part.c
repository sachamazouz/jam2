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

void create_parasit(display_struct_t *sprite_struct, enemy_pos_t *posi)
{
    sprite_struct->a.s_tick2.posi = (sfVector2f) {posi->enemy_array[0], posi->enemy_array[1]};
    sprite_struct->a.t_tick2.t =
    sfTexture_createFromFile("Ressources/tique_fam-removebg-preview.png", NULL);
    sprite_struct->a.s_tick2.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.s_tick2.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_tick2.s,
    sprite_struct->a.t_tick2.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_tick2.s,
    sprite_struct->a.s_tick2.posi);




    sprite_struct->a.s_tick1.posi = (sfVector2f) {posi->enemy_array[2], posi->enemy_array[3]};
    sprite_struct->a.s_tick1.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.t_tick1.t = sfTexture_createFromFile("Ressources/tique_fam-removebg-preview.png", NULL);
    sprite_struct->a.s_tick1.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_tick1.s, sprite_struct->a.t_tick1.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_tick1.s, sprite_struct->a.s_tick1.posi);


    sprite_struct->a.s_tick3.posi = (sfVector2f) {posi->enemy_array[4], posi->enemy_array[5]};
    sprite_struct->a.t_tick3.t =
    sfTexture_createFromFile("Ressources/tique_fam-removebg-preview.png", NULL);
    sprite_struct->a.s_tick3.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.s_tick3.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_tick3.s,
    sprite_struct->a.t_tick3.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_tick3.s,
    sprite_struct->a.s_tick3.posi);

    sprite_struct->a.s_tick4.posi = (sfVector2f) {posi->enemy_array[6], posi->enemy_array[7]};
    sprite_struct->a.t_tick4.t =
    sfTexture_createFromFile("Ressources/tique_fam-removebg-preview.png", NULL);
    sprite_struct->a.s_tick4.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.s_tick4.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_tick4.s,
    sprite_struct->a.t_tick4.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_tick4.s,
    sprite_struct->a.s_tick4.posi);

    sprite_struct->a.s_tick5.posi = (sfVector2f) {posi->enemy_array[8], posi->enemy_array[9]};
    sprite_struct->a.t_tick5.t =
    sfTexture_createFromFile("Ressources/tique_fam-removebg-preview.png", NULL);
    sprite_struct->a.s_tick5.rect = (sfIntRect) {0, 0, 110, 140};
    sprite_struct->a.s_tick5.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->a.s_tick5.s,
    sprite_struct->a.t_tick5.t, sfTrue);
    sfSprite_setPosition(sprite_struct->a.s_tick5.s,
    sprite_struct->a.s_tick5.posi);
}

int create_perso(display_struct_t *sprite_struct, enemy_pos_t *posi)
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

    create_parasit(sprite_struct, posi);
    return debug;
}


void create_sound(display_struct_t *sound)
{
    sound->sound.buffer = sfSoundBuffer_createFromFile("Ressources/Jump.ogg");
    sound->sound.sound = sfSound_create();
    sfSound_setBuffer(sound->sound.sound, sound->sound.buffer);
}
