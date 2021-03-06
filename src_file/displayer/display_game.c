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
    if (window->event.type == sfEvtMouseButtonPressed) {
        array->stink_ball = array->stink_ball - 1;
         window->attack.time = sfClock_getElapsedTime(window->attack.clock);
        if ((window->attack.time.microseconds) < 10)
            return;
    }
}

void draw_sprite(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_walpa.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_main.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick1.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick2.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick3.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick4.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick5.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick6.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick7.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick8.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick9.s, NULL);
    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_tick10.s, NULL);

    sfRenderWindow_drawSprite(basic->window, sprite_struct->a.s_porte_sortie.s, NULL);


    draw_ennemy(basic, sprite_struct);
    sfSprite_setTextureRect(sprite_struct->a.s_main.s,
    sprite_struct->a.s_main.rect);
    if (check_family(sprite_struct,array) != 0)
        basic->nb_switcher = 5;
    stink_ball(basic,sprite_struct, array);
    //hauteur -610 - -755
    //largeut -1320
    float hauteur_min = -755.0;
    float hauteur_max = -610.0;
    float largeur_min = -1320.0;

    if ((sprite_struct->s_walpa.posi.y > (hauteur_min) && sprite_struct->s_walpa.posi.y < (hauteur_max)) && sprite_struct->s_walpa.posi.x < largeur_min)
       basic->nb_switcher = 4;
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

void display_how_to_play1(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawText(basic->window, sprite_struct->text1.text, NULL);
}

void display_how_to_play2(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawText(basic->window, sprite_struct->text2.text, NULL);
}

void display_how_to_play3(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawText(basic->window, sprite_struct->text3.text, NULL);
}

void launch_intro(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    sfRenderWindow_drawSprite(basic->window, sprite_struct->s_bulle.s, NULL);
    sfRenderWindow_drawText(basic->window, sprite_struct->click_intro.text, NULL);
    sprite_struct->clock.time = sfClock_getElapsedTime(sprite_struct->clock.clock);
    sprite_struct->seconds = sprite_struct->clock.time.microseconds / 1000000.0;
    if (sfKeyboard_isKeyPressed(sfKeyA) && (sprite_struct->seconds > 0.10)) {
        sfClock_restart(sprite_struct->clock.clock);
        array->introduction = 10;
        return;
    }
    if (array->introduction == 0) {
        display_how_to_play1(basic, sprite_struct, array);
        if(sfKeyboard_isKeyPressed(sfKeyRight) && (sprite_struct->seconds > 0.10)) {
            array->introduction++;
            sfClock_restart(sprite_struct->clock.clock);
            return;
        }
    }
     if (array->introduction == 1) {
        display_how_to_play2(basic, sprite_struct, array);
        if(sfKeyboard_isKeyPressed(sfKeyRight) && (sprite_struct->seconds > 0.10) ) {
            array->introduction++;
            sfClock_restart(sprite_struct->clock.clock);
            return;
        }
        if(sfKeyboard_isKeyPressed(sfKeyLeft) && (sprite_struct->seconds > 0.10)) {
            array->introduction--;
            sfClock_restart(sprite_struct->clock.clock);
            return;
        }
    }
    if (array->introduction == 2) {
        display_how_to_play3(basic, sprite_struct, array);
        if(sfKeyboard_isKeyPressed(sfKeyRight) && (sprite_struct->seconds > 0.10)) {
            array->introduction = 10;
            sfClock_restart(sprite_struct->clock.clock);
            return;
        }
        if(sfKeyboard_isKeyPressed(sfKeyLeft) && (sprite_struct->seconds > 0.10)) {
            array->introduction--;
            sfClock_restart(sprite_struct->clock.clock);
            return;
        }
    }
    return;
}

void display_game(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array)
{
    draw_sprite(basic, sprite_struct, array);
    if (array->introduction < 5) {
        launch_intro(basic, sprite_struct, array);
        return;
    }

    if (array->introduction == 10) {
        m_move(sprite_struct);
        draw_sprite(basic, sprite_struct, array);
        echap(basic);
        check_family(sprite_struct,array);
    }
}
