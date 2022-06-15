/*
** EPITECH PROJECT, 2022
** firstpkansprite
** File description:
** firstpkansprite
*/
#include "rpg.h"
#include "my.h"

void create_menu(display_struct_t *s)
{
    s->t_mon.t =
    sfTexture_createFromFile("Ressources/nomusic.png", NULL);
    s->s_mon.s = sfSprite_create();
    sfSprite_setTexture(s->s_mon.s, s->t_mon.t, sfTrue);
    s->t_mof.t =
    sfTexture_createFromFile("Ressources/gena.png", NULL);
    s->s_mof.s = sfSprite_create();
    sfSprite_setTexture(s->s_mof.s, s->t_mof.t, sfTrue);
    s->t_30.t =
    sfTexture_createFromFile("Ressources/30f.jpg", NULL);
    s->s_30.s = sfSprite_create();
    sfSprite_setTexture(s->s_30.s, s->t_30.t, sfTrue);
    s->t_60.t =
    sfTexture_createFromFile("Ressources/60fps.png", NULL);
    s->s_60.s = sfSprite_create();
    sfSprite_setTexture(s->s_60.s, s->t_60.t, sfTrue);
    s->t_option.t =
    sfTexture_createFromFile("Ressources/options.png", NULL);
    s->s_option.s = sfSprite_create();
    sfSprite_setTexture(s->s_option.s, s->t_option.t, sfFalse);
}

void create_home(display_struct_t *s)
{
    s->s_homeb.posi = (sfVector2f) {1200, 400};
    s->t_homeb.t =
        sfTexture_createFromFile("Ressources/home.png", NULL);
    s->s_homeb.rect = (sfIntRect) {3, 0, 260, 60};
    s->s_homeb.s = sfSprite_create();
    sfSprite_setTexture(s->s_homeb.s, s->t_homeb.t, sfTrue);
    sfSprite_setTextureRect(s->s_homeb.s, s->s_homeb.rect);
    sfSprite_setPosition(s->s_homeb.s, s->s_homeb.posi);
    s->s_continue.posi = (sfVector2f) {300, 260};
    s->t_continue.t =
    sfTexture_createFromFile("Ressources/continue.png", NULL);
    s->s_continue.rect = (sfIntRect) {0, 0, 438, 62};
    s->s_continue.s = sfSprite_create();
    sfSprite_setTexture(s->s_continue.s, s->t_continue.t, sfTrue);
    sfSprite_setTextureRect(s->s_continue.s, s->s_continue.rect);
    sfSprite_setPosition(s->s_continue.s, s->s_continue.posi);
    s->t_bar.t =
    sfTexture_createFromFile("Ressources/barrier.png", NULL);
    s->s_bar.s = sfSprite_create();
    sfSprite_setTexture(s->s_bar.s, s->t_bar.t, sfFalse);
}

void create_text_name(display_struct_t *sprite_struct)
{
    sprite_struct->game_name.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    sprite_struct->game_name.text = sfText_create();
    sfText_setFont(sprite_struct->game_name.text,
    sprite_struct->game_name.font);
    sfText_setCharacterSize(sprite_struct->game_name.text, 100);
    sfText_setString(sprite_struct->game_name.text,
    "Jam-Jam\nHide Hide\nCache cache");
    sfText_setColor(sprite_struct->game_name.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->game_name.text, (sfVector2f) {700, 10});
}

void create_sprite_struct_start_exit(display_struct_t *s)
{
    create_text_name(s);
    s->s_start.posi = (sfVector2f) {300, 400};
    s->t_start.t = sfTexture_createFromFile("Ressources/Start.png", NULL);
    s->s_start.rect = (sfIntRect) {10, 0, 605, 70};
    s->s_start.s = sfSprite_create();
    sfSprite_setTexture(s->s_start.s, s->t_start.t, sfTrue);
    sfSprite_setTextureRect(s->s_start.s, s->s_start.rect);
    sfSprite_setPosition(s->s_start.s, s->s_start.posi);
    s->s_exit.posi = (sfVector2f) {300, 550};
    s->t_exit.t = sfTexture_createFromFile("Ressources/Exit.png", NULL);
    s->s_exit.rect = (sfIntRect) {10, 0, 510, 70};
    s->s_exit.s = sfSprite_create();
    sfSprite_setTexture(s->s_exit.s, s->t_exit.t, sfTrue);
    sfSprite_setTextureRect(s->s_exit.s, s->s_exit.rect);
    sfSprite_setPosition(s->s_exit.s, s->s_exit.posi);
    s->t_esc.t = sfTexture_createFromFile("Ressources/jam_fond.png", NULL);
    s->s_esc.s = sfSprite_create();
    sfSprite_setTexture(s->s_esc.s, s->t_esc.t, sfTrue);
    create_tuto(s);
    create_hand(s);
}

void create_sprite_struct_tuto(display_struct_t *sprite_struct)
{
    sprite_struct->thome.t =
    sfTexture_createFromFile("Ressources/jam_fond.png", NULL);
    sprite_struct->shome.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->shome.s,
    sprite_struct->thome.t, sfTrue);
    sprite_struct->t_cave.t =
    sfTexture_createFromFile("Ressources/cave.jpg", NULL);
    sprite_struct->s_cave.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_cave.s,
    sprite_struct->t_cave.t, sfTrue);
    sprite_struct->t_gap.t =
    sfTexture_createFromFile("Ressources/gap.png", NULL);
    sprite_struct->s_gap.s  = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_gap.s,
    sprite_struct->t_gap.t, sfTrue);
}

void create_tuto(display_struct_t *sprite_struct)
{
    sprite_struct->s_tuto.posi = (sfVector2f) {1050, 600};
    sprite_struct->t_tuto.t =
        sfTexture_createFromFile("Ressources/tuto.png", NULL);
    sprite_struct->s_tuto.rect = (sfIntRect) {10, 0, 905, 70};
    sprite_struct->s_tuto.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_tuto.s,
    sprite_struct->t_tuto.t, sfTrue);
    sfSprite_setTextureRect(sprite_struct->s_tuto.s,
    sprite_struct->s_tuto.rect);
    sfSprite_setPosition(sprite_struct->s_tuto.s,
    sprite_struct->s_tuto.posi);
    create_tuto_text(sprite_struct);
    create_return(sprite_struct);
    create_home(sprite_struct);
}
