/*
** EPITECH PROJECT, 2022
** invetory.c
** File description:
** inventory display
*/

#include "rpg.h"
#include "my.h"

void create_all_key(basic_struct_t *window)
{
    create_key1(window);
    create_key2(window);
    create_key3(window);
    create_key4(window);
    create_key5(window);
    return;
}

void create_all_attack(basic_struct_t *window)
{
    create_attack1(window);
    create_attack2(window);
    create_attack3(window);
    create_attack4(window);
    create_attack5(window);
    return;
}

void create_inventory(basic_struct_t *window, display_struct_t *sprite_struct)
{
    window->i.sboule_puante.posi = (sfVector2f) {1800, 100};
    window->i.tboule_puante.t =
    sfTexture_createFromFile("Ressources/bombe_puante.png", NULL);
    window->i.sboule_puante.rect = (sfIntRect) {0, 0, 100, 120};
    window->i.sboule_puante.s = sfSprite_create();
    sfSprite_setTexture(window->i.sboule_puante.s, window->i.tboule_puante.t, sfTrue);
    sfSprite_setTextureRect(window->i.sboule_puante.s, window->i.sboule_puante.rect);
    sfSprite_setPosition(window->i.sboule_puante.s, window->i.sboule_puante.posi);
    create_a(sprite_struct);
    complete_inventory(window);
    create_all_key(window);
    create_all_attack(window);
    create_all_buttons(window);
    create_prison(window);
    return;
}

void spritepos(display_struct_t *s)
{
    sfSprite_setPosition(s->s_walpa.s, s->s_walpa.posi);
    sfSprite_setPosition(s->s_enemy1.s, s->s_enemy1.posi);
    sfSprite_setPosition(s->s_enemy2.s, s->s_enemy2.posi);
    sfSprite_setPosition(s->s_enemy3.s, s->s_enemy3.posi);
    sfSprite_setPosition(s->s_enemy4.s, s->s_enemy4.posi);
    sfSprite_setPosition(s->s_enemy5.s, s->s_enemy5.posi);

    sfSprite_setPosition(s->a.s_tick1.s, s->a.s_tick1.posi);
    sfSprite_setPosition(s->a.s_tick2.s, s->a.s_tick2.posi);
    sfSprite_setPosition(s->a.s_tick3.s, s->a.s_tick3.posi);
    sfSprite_setPosition(s->a.s_tick4.s, s->a.s_tick4.posi);
    sfSprite_setPosition(s->a.s_tick5.s, s->a.s_tick5.posi);

    sfSprite_setPosition(s->a.s_tick6.s, s->a.s_tick6.posi);
    sfSprite_setPosition(s->a.s_tick7.s, s->a.s_tick7.posi);
    sfSprite_setPosition(s->a.s_tick8.s, s->a.s_tick8.posi);
    sfSprite_setPosition(s->a.s_tick9.s, s->a.s_tick9.posi);
    sfSprite_setPosition(s->a.s_tick10.s, s->a.s_tick10.posi);

    sfSprite_setPosition(s->a.s_porte_sortie.s, s->a.s_porte_sortie.posi);
    sfSprite_setPosition(s->s_enemy_face1.s, s->s_enemy_face1.posi);
    sfSprite_setPosition(s->s_enemy_face2.s, s->s_enemy_face2.posi);
    sfSprite_setPosition(s->s_enemy_face3.s, s->s_enemy_face3.posi);
    sfSprite_setPosition(s->s_enemy_face4.s, s->s_enemy_face4.posi);
    sfSprite_setPosition(s->s_enemy_face5.s, s->s_enemy_face5.posi);
}

void spriteposx(display_struct_t *s)
{


    sfSprite_setPosition(s->a.s_tick1.s, s->a.s_tick1.posi);
    sfSprite_setPosition(s->a.s_tick2.s, s->a.s_tick2.posi);
    sfSprite_setPosition(s->a.s_tick3.s, s->a.s_tick3.posi);
    sfSprite_setPosition(s->a.s_tick4.s, s->a.s_tick4.posi);
    sfSprite_setPosition(s->a.s_tick5.s, s->a.s_tick5.posi);

    sfSprite_setPosition(s->a.s_tick6.s, s->a.s_tick6.posi);
    sfSprite_setPosition(s->a.s_tick7.s, s->a.s_tick7.posi);
    sfSprite_setPosition(s->a.s_tick8.s, s->a.s_tick8.posi);
    sfSprite_setPosition(s->a.s_tick9.s, s->a.s_tick9.posi);
    sfSprite_setPosition(s->a.s_tick10.s, s->a.s_tick10.posi);
    sfSprite_setPosition(s->a.s_porte_sortie.s, s->a.s_porte_sortie.posi);

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
