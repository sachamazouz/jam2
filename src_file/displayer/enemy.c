/*
** EPITECH PROJECT, 2022
** enemy rpg
** File description:
** enneyy rpg epitech
*/

#include "rpg.h"
#include "my.h"

void enemyinit1(display_struct_t *sprite_struct)
{
    sprite_struct->s_enemy1.s = sfSprite_create();
    sprite_struct->t_enemy1.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    sprite_struct->s_enemy_face1.s = sfSprite_create();
    sprite_struct->t_enemy_face1.t =
        sfTexture_createFromFile("Ressources/alexandra.png", NULL);
    sprite_struct->s_enemy_face1.posi = (sfVector2f) {1753, 900};
    sprite_struct->s_enemy1.rect = (sfIntRect) {0, 0, 180, 290};
    sprite_struct->s_enemy1.posi = (sfVector2f) {1700, 900};
    sfVector2f x = {0.7 ,0.5};
    sfVector2f y = {0.19 ,0.19};
    sfSprite_setTexture(sprite_struct->s_enemy1.s,
                        sprite_struct->t_enemy1.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_enemy_face1.s,
                        sprite_struct->t_enemy_face1.t, sfFalse);
    sfSprite_setTextureRect(sprite_struct->s_enemy1.s,
                            sprite_struct->s_enemy1.rect);
    sfSprite_setPosition(sprite_struct->s_enemy1.s,
                         sprite_struct->s_enemy1.posi);
    sfSprite_setPosition(sprite_struct->s_enemy_face1.s,
                         sprite_struct->s_enemy_face1.posi);
    sfSprite_setScale(sprite_struct->s_enemy1.s, x);
    sfSprite_setScale(sprite_struct->s_enemy_face1.s, y);
}

void enemyinit2(display_struct_t *sprite_struct)
{
    sprite_struct->s_enemy2.s = sfSprite_create();
    sprite_struct->t_enemy2.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    sprite_struct->s_enemy_face2.s = sfSprite_create();
    sprite_struct->t_enemy_face2.t =
        sfTexture_createFromFile("Ressources/leandre.png", NULL);
    sprite_struct->s_enemy_face2.posi = (sfVector2f) {1725, 2874};
    sprite_struct->s_enemy2.rect = (sfIntRect) {0, 0, 180, 290};
    sprite_struct->s_enemy2.posi = (sfVector2f) {1700, 2900};
    sfVector2f x = {0.7 ,0.5};
    sfVector2f y = {0.3 ,0.22};
    sfSprite_setTexture(sprite_struct->s_enemy_face2.s,
                        sprite_struct->t_enemy_face2.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_enemy2.s,
                        sprite_struct->t_enemy2.t, sfFalse);
    sfSprite_setTextureRect(sprite_struct->s_enemy2.s,
                            sprite_struct->s_enemy2.rect);
    sfSprite_setPosition(sprite_struct->s_enemy2.s,
                         sprite_struct->s_enemy2.posi);
    sfSprite_setPosition(sprite_struct->s_enemy_face2.s,
                         sprite_struct->s_enemy_face2.posi);
    sfSprite_setScale(sprite_struct->s_enemy2.s, x);
    sfSprite_setScale(sprite_struct->s_enemy_face2.s, y);
}

void enemyinit3(display_struct_t *sprite_struct)
{
    sprite_struct->s_enemy3.s = sfSprite_create();
    sprite_struct->t_enemy3.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    sprite_struct->s_enemy_face3.s = sfSprite_create();
    sprite_struct->t_enemy_face3.t =
        sfTexture_createFromFile("Ressources/ilias.png", NULL);
    sprite_struct->s_enemy_face3.posi = (sfVector2f) {1081, 4805};
    sprite_struct->s_enemy3.rect = (sfIntRect) {0, 0, 180, 290};
    sprite_struct->s_enemy3.posi = (sfVector2f) {1030, 4820};
    sfVector2f x = {0.7 ,0.5};
    sfVector2f y = {0.22 ,0.22};
    sfSprite_setTexture(sprite_struct->s_enemy3.s,
                        sprite_struct->t_enemy3.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_enemy_face3.s,
                        sprite_struct->t_enemy_face3.t, sfFalse);
    sfSprite_setTextureRect(sprite_struct->s_enemy3.s,
                            sprite_struct->s_enemy3.rect);
    sfSprite_setPosition(sprite_struct->s_enemy3.s,
                         sprite_struct->s_enemy3.posi);
    sfSprite_setPosition(sprite_struct->s_enemy_face3.s,
                         sprite_struct->s_enemy_face3.posi);
    sfSprite_setScale(sprite_struct->s_enemy3.s, x);
    sfSprite_setScale(sprite_struct->s_enemy_face3.s, y);
}

void enemyinit4(display_struct_t *sprite_struct)
{
    sprite_struct->s_enemy4.s = sfSprite_create();
    sprite_struct->t_enemy4.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    sprite_struct->s_enemy_face4.s = sfSprite_create();
    sprite_struct->t_enemy_face4.t =
        sfTexture_createFromFile("Ressources/najib.png", NULL);
    sprite_struct->s_enemy_face4.posi = (sfVector2f) {-353, 1793};
    sprite_struct->s_enemy4.rect = (sfIntRect) {0, 0, 180, 290};
    sprite_struct->s_enemy4.posi = (sfVector2f) {-400, 1800};
    sfVector2f x = {0.7 ,0.5};
    sfVector2f y = {0.33 ,0.33};
    sfSprite_setTexture(sprite_struct->s_enemy4.s,
                        sprite_struct->t_enemy4.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_enemy_face4.s,
                        sprite_struct->t_enemy_face4.t, sfFalse);
    sfSprite_setTextureRect(sprite_struct->s_enemy4.s,
                            sprite_struct->s_enemy4.rect);
    sfSprite_setPosition(sprite_struct->s_enemy_face4.s,
                         sprite_struct->s_enemy_face4.posi);
    sfSprite_setPosition(sprite_struct->s_enemy4.s,
                         sprite_struct->s_enemy4.posi);
    sfSprite_setScale(sprite_struct->s_enemy4.s, x);
    sfSprite_setScale(sprite_struct->s_enemy_face4.s, y);
}

void enemyinit5(display_struct_t *sprite_struct)
{
    sprite_struct->s_enemy5.s = sfSprite_create();
    sprite_struct->t_enemy5.t =
        sfTexture_createFromFile("Ressources/enemy.png", NULL);
    sprite_struct->s_enemy_face5.s = sfSprite_create();
    sprite_struct->t_enemy_face5.t =
        sfTexture_createFromFile("Ressources/emeric.png", NULL);
    sprite_struct->s_enemy_face5.posi = (sfVector2f) {-364, 3670};
    sprite_struct->s_enemy5.rect = (sfIntRect) {0, 0, 180, 290};
    sprite_struct->s_enemy5.posi = (sfVector2f) {-400, 3700};
    sfVector2f x = {0.7 ,0.5};
    sfVector2f y = {0.85 ,0.85};
    sfSprite_setTexture(sprite_struct->s_enemy5.s,
                        sprite_struct->t_enemy5.t, sfFalse);
    sfSprite_setTexture(sprite_struct->s_enemy_face5.s,
                        sprite_struct->t_enemy_face5.t, sfFalse);
    sfSprite_setTextureRect(sprite_struct->s_enemy5.s,
                            sprite_struct->s_enemy5.rect);
    sfSprite_setPosition(sprite_struct->s_enemy5.s,
                         sprite_struct->s_enemy5.posi);
    sfSprite_setPosition(sprite_struct->s_enemy_face5.s,
                         sprite_struct->s_enemy_face5.posi);
    sfSprite_setScale(sprite_struct->s_enemy5.s, x);
    sfSprite_setScale(sprite_struct->s_enemy_face5.s, y);
}
