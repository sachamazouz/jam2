/*
** EPITECH PROJECT, 2022
** dg
** File description:
** dispay_g
*/

#include "my.h"
#include "rpg.h"

void draw_ennemy(basic_struct_t *basic, display_struct_t *sprite_struct)
{
    if (sprite_struct->detect_fight1 == 1) {
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy1.s, NULL);
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy_face1.s, NULL);
    }
    if (sprite_struct->detect_fight2 == 1) {
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy2.s, NULL);
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy_face2.s, NULL);
    }
    if (sprite_struct->detect_fight3 == 1) {
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy3.s, NULL);
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy_face3.s, NULL);
    }
    if (sprite_struct->detect_fight4 == 1) {
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy4.s, NULL);
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy_face4.s, NULL);
    }
    if (sprite_struct->detect_fight5 == 1) {
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy5.s, NULL);
        sfRenderWindow_drawSprite(basic->window,
                                  sprite_struct->s_enemy_face5.s, NULL);
    }
}

void stink_ball(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->window);
    //printf("%d\n" ,mouse.x);
    //printf("%d\n" ,mouse.y);
    if (window->event.type == sfEvtMouseButtonPressed) {
        array->stink_ball = array->stink_ball - 1;
         window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds) < 10)
            return;
        //claque_sound(window, sprite_struct);
        //check_family(sprite_struct,array,mouse);
        //faire l'animation bruit.
    }
}

void draw_sprite(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_walpa.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_main.s, NULL);

    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy1.s, NULL);

    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick1.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick2.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick3.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick4.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick5.s, NULL);

    draw_ennemy(basic, sprite_struct);
    sfSprite_setTextureRect(sprite_struct->a.s_main.s,
    sprite_struct->a.s_main.rect);
    stink_ball(basic,sprite_struct, array);
    //draw_score(basic,sprite_struct, array);
    //detect_enemy_fight(basic, sprite_struct);
    /*if (sprite_struct->detect_fight1 == 10) {
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy1.s, NULL);
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy_face1.s, NULL);
    }
    if (sprite_struct->detect_fight1 == 10) {
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy2.s, NULL);
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy_face2.s, NULL);
    }
    if (sprite_struct->detect_fight1 == 10) {
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy3.s, NULL);
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy_face3.s, NULL);
    }
    if (sprite_struct->detect_fight1 == 10) {
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy4.s, NULL);
        sfRenderWindow_drawSprite(basic->window, sprite_struct->s_enemy_face4.s, NULL);
    }*/

    if (sfKeyboard_isKeyPressed(sfKeyZ))
        basic->nb_switcher = 3;
    if (sfKeyboard_isKeyPressed(sfKeyQ)) {
        sfRenderWindow_close(basic->window);
    }
}

void draw_score(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *number)
{
    sprite_struct->text.font = sfFont_createFromFile("Ressources/zorque.otf");
    sprite_struct->text.text = sfText_create();
    sfText_setFont(sprite_struct->text.text, sprite_struct->text.font);
    sfText_setCharacterSize(sprite_struct->text.text, 90);
    sfText_setString(sprite_struct->text.text, my_itoa(number->stink_ball));
    if (basic->score > 15)
        sfText_setColor(sprite_struct->text.text, sfBlue);
    if (basic->score > 10  && basic->score < 14)
        sfText_setColor(sprite_struct->text.text, sfYellow);
    if (basic->score < 10)
        sfText_setColor(sprite_struct->text.text, sfMagenta);
    sfText_setPosition(sprite_struct->text.text, (sfVector2f) {1670, 105});
    if (number->stink_ball == 0)
        basic->nb_switcher = 5;
    sfRenderWindow_drawText(basic->window,
    sprite_struct->text.text, NULL);
    sfRenderWindow_drawSprite(basic->window, basic->i.sboule_puante.s, NULL);
}

void display_game(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    m_move(sprite_struct);
    draw_sprite(basic, sprite_struct, array);
    echap(basic);
}
