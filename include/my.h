/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #define TICK_AMOUNT      (5)

typedef struct get_sound {
    sfSoundBuffer *buffer;
    sfSound *sound;
} def_sound;

typedef struct get_text {
    sfFont *font;
    sfText *text;
} def_text;

typedef struct get_clock {
    sfClock *clock;
    sfVector2f offset;
    sfTime time;
} def_clock;

typedef struct get_sprite {
    sfSprite *s;
    sfVector2f posi;
    sfIntRect rect;
    sfIntRect s_rect;
} def_sprite;

typedef struct get_texture {
    sfTexture *t;
} def_texture;

typedef struct get_music {
    sfMusic *music;
} def_music;

typedef struct i_attack {
    def_sprite s_attack1;
    def_texture t_attack1;
    def_sprite s_attack2;
    def_texture t_attack2;
    def_sprite s_attack3;
    def_texture t_attack3;
    def_sprite s_attack4;
    def_texture t_attack4;
    def_sprite s_button1;
    def_texture t_button1;
    def_sprite s_button2;
    def_texture t_button2;
    def_sprite s_button3;
    def_texture t_button3;
    def_sprite s_button4;
    def_texture t_button4;
} inventory_attack;

typedef struct get_animate_sprite {
    def_sprite s_tick2;
    def_texture t_tick2;
    def_sprite s_hunter;
    def_texture t_hunter;
    def_sprite s_cloud;
    def_texture t_cloud;
    def_sprite s_main;
    def_texture t_main;
    def_sprite s_tick1;
    def_texture t_tick1;
    def_sprite s_tick3;
    def_texture t_tick3;
    def_sprite s_tick4;
    def_texture t_tick4;
    def_sprite s_tick5;
    def_texture t_tick5;
}animate_sprite;

typedef struct displayer {
    def_text tuto_name;
    def_text save_tony;
    def_texture t_tonyface;
    def_sprite s_tonyface;
    def_texture thome;
    def_sprite shome;
    def_texture t_option;
    def_sprite s_option;
    def_texture t_cave;
    def_sprite s_cave;
    def_texture t_bar;
    def_sprite s_bar;
    def_texture t_tuto;
    def_sprite s_tuto;
    def_texture t_tuto1;
    def_sprite s_tuto1;
    def_texture t_tuto2;
    def_sprite s_tuto2;
    def_texture t_tuto3;
    def_sprite s_tuto3;
    def_texture t_tuto4;
    def_sprite s_tuto4;
    def_texture t_return;
    def_sprite s_return;
    def_sprite s_start;
    def_sprite s_enemy_face1;
    def_texture t_enemy_face1;
    def_sprite s_enemy_face2;
    def_texture t_enemy_face2;
    def_sprite s_enemy_face3;
    def_texture t_enemy_face3;
    def_sprite s_coffre;
    def_texture t_coffre;
    def_sprite s_enemy_face4;
    def_texture t_enemy_face4;
    def_sprite s_enemy_face5;
    def_texture t_enemy_face5;
    def_texture t_start;
    def_sprite s_inventory;
    def_texture t_inventory;
    def_sprite s_mof;
    def_texture t_mof;
    def_sprite s_fond_w;
    def_texture t_fond_w;
    def_sprite s_60;
    def_texture t_60;
    def_sprite s_30;
    def_texture t_30;
    def_sprite s_exit;
    def_texture t_exit;
    def_sprite s_exit3;
    def_texture t_exit3;
    def_sprite s_runner;
    def_texture t_runner;
    def_sprite s_easy;
    def_texture t_easy;
    def_sprite s_enemy_fight;
    def_texture t_enemy_fight;
    def_sprite s_face_fight;
    def_texture t_face_fight;
    def_sprite s_enemy1;
    def_texture t_enemy1;
    def_sprite s_enemy2;
    def_texture t_enemy2;
    def_sprite s_enemy3;
    def_texture t_enemy3;
    def_sprite s_enemy4;
    def_texture t_hand;
    def_sprite s_hand;
    def_texture t_enemy4;
    def_sprite s_enemy5;
    def_texture t_enemy5;
    def_sprite s_abutton;
    def_texture t_abutton;
    def_sprite s_perso_fight;
    def_texture t_perso_fight;
    def_sprite s_walpa;
    def_texture t_walpa;
    def_sprite s_loose;
    def_texture t_loose;
    def_sprite s_win;
    def_texture t_win;
    def_sprite s_win2;
    def_texture t_win2;
    def_sprite s_retry;
    def_texture t_retry;
    def_sprite s_mon;
    def_texture t_mon;
    def_sprite s_esc;
    def_texture t_esc;
    def_sprite s_colx;
    def_texture t_colx;
    def_sprite s_homeb;
    def_texture t_homeb;
    def_sprite s_continue;
    def_texture t_continue;
    def_text text;
    def_text tquete;
    def_text game_name;
    def_sound sound;
    def_sound sound_a1;
    def_sound sound_a2;
    def_sound sound_a3;
    def_sound sound_a4;
    def_music music_game;
    def_clock clock;
    def_clock clock2;
    def_sprite s_gap;
    def_texture t_gap;
    inventory_attack e;
    animate_sprite a;
    int what_face;
    int detect_fight1;
    int detect_fight2;
    int detect_fight3;
    int detect_fight4;
    int detect_fight5;
    int space;
    int frame;
    int creater;
    float seconds;
    float seconds2;
} display_struct_t;

typedef struct inventory {
    int attack1;
    int attack2;
    int attack3;
    int attack4;
    int attack5;
    def_texture tattack1;
    def_sprite sattack1;
    def_texture tattack2;
    def_sprite sattack2;
    def_texture tattack3;
    def_sprite sattack3;
    def_texture tattack4;
    def_sprite sattack4;
    def_texture tattack5;
    def_sprite sattack5;
    int key1;
    int key2;
    int key3;
    int key4;
    int key5;
    def_texture tkey1;
    def_sprite skey1;
    def_texture tkey2;
    def_sprite skey2;
    def_texture tkey3;
    def_sprite skey3;
    def_texture tkey4;
    def_sprite skey4;
    def_texture tkey5;
    def_sprite skey5;
    def_texture tchest;
    def_sprite schest;
    def_texture tprison;
    def_sprite sprison;
    def_sprite sboule_puante;
    def_texture tboule_puante;
} def_inventory;

typedef struct enemy_sprite {
    def_sprite s_wal;
    def_texture t_wal;
    def_sprite s_enemy1;
    def_texture t_enemy1;
    def_sprite s_enemy2;
    def_texture t_enemy2;
    def_sprite s_enemy3;
    def_texture t_enemy3;
    def_sprite s_enemy4;
    def_texture t_enemy4;
    def_sprite s_enemy5;
    def_texture t_enemy5;
    def_sprite s_button1;
    def_texture t_button1;
    def_sprite s_button2;
    def_texture t_button2;
    def_sprite s_button3;
    def_texture t_button3;
    def_sprite s_button4;
    def_texture t_button4;
    def_sprite s_button5;
    def_texture t_button5;
} enemy;

typedef struct bstruct {
    def_inventory i;
    def_text text;
    def_text text1;
    enemy e;
    def_clock attack;
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
    sfVector2i posi_mouse;
    sfVector2f posi_sprite;
    sfMouseButton button;
    int click_key_1;
    int click_key_2;
    int click_key_3;
    int click_key_4;
    int click_key_5;
    int open_coffre;
    int score;
    int speed;
    int enemy_value;
    int speed_obstacle;
    int nb_switcher;
    int obstacle;
    int obstacle2;
    char *buffer_score;
    char *buffer_life;
    int nb_window_y;
    int nb_window_x;
    int enemy_life;
    int our_life;
    int caver_enter;
    int first_check;
} basic_struct_t;

typedef struct ennemy_pos {
    int *enemy_array;
    int stink_ball;
} enemy_pos_t;

#endif /* MY_H_ */
