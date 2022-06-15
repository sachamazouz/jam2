/*
** EPITECH PROJECT, 2022
** create_window
** File description:
** create_window
*/
#include "rpg.h"
#include "my.h"

void create_background_game(display_struct_t *sprite_struct, char *way_map)
{
    sfVector2f x = {3 ,3};

    sprite_struct->t_walpa.t = sfTexture_createFromFile(way_map, NULL);
    sprite_struct->s_walpa.s = sfSprite_create();
    sprite_struct->s_walpa.posi = (sfVector2f) {-720, 300};
    sfSprite_setTexture(sprite_struct->s_walpa.s,
                        sprite_struct->t_walpa.t, sfTrue);
    sfSprite_setPosition(sprite_struct->s_walpa.s,
                         sprite_struct->s_walpa.posi);
    sfSprite_setScale(sprite_struct->s_walpa.s, x);
}

void create_my_windows(basic_struct_t *window)
{
    int x_value = 1913;
    int y_value = 970;

    window->nb_window_y = y_value;
    window->nb_window_x = x_value;
    window->mode.height = y_value;
    window->mode.width = x_value;
    window->mode.bitsPerPixel = 64;
    window->window = sfRenderWindow_create(window->mode,
    "JAM JAM", sfDefaultStyle, NULL);
    window->caver_enter = 1;
}

void sfSprite_setPositionx(display_struct_t *s)
{
    sfSprite_setPosition(s->s_walpa.s, s->s_walpa.posi);
    sfSprite_setPosition(s->s_enemy1.s, s->s_enemy1.posi);
    sfSprite_setPosition(s->s_enemy2.s, s->s_enemy2.posi);
    sfSprite_setPosition(s->s_enemy3.s, s->s_enemy3.posi);
    sfSprite_setPosition(s->s_enemy4.s, s->s_enemy4.posi);
    sfSprite_setPosition(s->s_enemy5.s, s->s_enemy5.posi);
    sfSprite_setPosition(s->s_enemy_face1.s, s->s_enemy_face1.posi);
    sfSprite_setPosition(s->s_enemy_face2.s, s->s_enemy_face2.posi);
    sfSprite_setPosition(s->s_enemy_face3.s, s->s_enemy_face3.posi);
    sfSprite_setPosition(s->s_enemy_face4.s, s->s_enemy_face4.posi);
    sfSprite_setPosition(s->s_enemy_face5.s, s->s_enemy_face5.posi);
}