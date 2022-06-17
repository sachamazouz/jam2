/*
** EPITECH PROJECT, 2022
** rpg .h
** File description:
** .h for rpg game
*/

#ifndef _RPG_H_
#define _RPG_H_

#include "my.h"
#include "time.h"
char *my_itoa(int number);
int my_putchar(char c);
int my_putstr(char const *str);
int my_putnbr(int n);
int my_atoi(char *string);

void draw(basic_struct_t *window, display_struct_t *sprite_struct);
void destroy(basic_struct_t *window, display_struct_t *sprite_struct);
int main(void);
void manageoptions(basic_struct_t *basic, display_struct_t *sprite_struct);

void init_inventory_end(basic_struct_t *window, display_struct_t *sprite_struct);
void enemyinit(display_struct_t *sprite_struct);
int create_perso(display_struct_t *sprite_struct, enemy_pos_t *posi);
void create_sound(display_struct_t *sound);
void create_score(display_struct_t *sprite_struct);

void draw_end(basic_struct_t *window);
void m_up(display_struct_t *sprite_struct);
void m_down(display_struct_t *sprite_struct);
void m_left(display_struct_t *sprite_struct);
void m_right(display_struct_t *sprite_struct);
void m_move(display_struct_t *sprite_struct);
int coli(display_struct_t *sprite_struct);
void click_key(basic_struct_t *window);

void condition_down(display_struct_t *sprite_struct);
void condition_left(display_struct_t *sprite_struct);
void condition_right(display_struct_t *sprite_struct);
void condition_up(display_struct_t *sprite_struct);

void m_down_map(display_struct_t *sprite_struct);
void m_up_map(display_struct_t *sprite_struct);
void m_left_map(display_struct_t *sprite_struct);
void m_right_map(display_struct_t *sprite_struct);
void mouv_rect(sfIntRect *rect, int offset, int max_value);

void create_tuto(display_struct_t *sprite_struct);
void create_sprite_struct_tuto(display_struct_t *sprite_struct);
void create_sprite_struct_start_exit(display_struct_t *sprite_struct);

void create_tuto1(display_struct_t *s);
void create_tuto2(display_struct_t *s);
void create_tuto3(display_struct_t *s);
void create_tuto4(display_struct_t *s);
void create_return(display_struct_t *s);

int display_tuto(basic_struct_t *basic, display_struct_t *sprite_s);
void get_return_click(basic_struct_t *basic);
void get_click_pause(basic_struct_t *basic, display_struct_t *sprite_struct);

void mangascalex(display_struct_t *sprite_struct, basic_struct_t window);
void mangascale(display_struct_t *sprite_struct, basic_struct_t window);
void mangascales(display_struct_t *sprite_struct, basic_struct_t window);
void nb_switcher(basic_struct_t *window, display_struct_t *sprite_struct);
void create_menu(display_struct_t *s);

void create_background_game(display_struct_t *sprite_struct, char *way_map);
void create_my_windows(basic_struct_t *window);

void tuto_nb_switcher(basic_struct_t *basic);
void exit_nb_switcher1(basic_struct_t *basic, display_struct_t *sprite_s);
void start_nb_switcher1(basic_struct_t *basic, display_struct_t *sprite_s);
void set_easy(display_struct_t *sprite_s);
int display_easy(basic_struct_t *basic, display_struct_t *sprite_s);
int click_easy(basic_struct_t *window, display_struct_t *sprite_struct);
void echap(basic_struct_t *window);
void play_music(display_struct_t *s, basic_struct_t *window);

void detectez(basic_struct_t *basic, display_struct_t *sprite_struct);
void detectvif(basic_struct_t *basic, display_struct_t *sprite_struct);
void detectzen(basic_struct_t *basic, display_struct_t *sprite_struct);
void detectpam(basic_struct_t *basic, display_struct_t *sprite_struct);

void display_win(basic_struct_t *window, display_struct_t *sprite_struct);
void create_win(display_struct_t *sprite_struct);

void helper_drawing(basic_struct_t *window, display_struct_t *sprite_struct);
void display_loose(basic_struct_t *window, display_struct_t *sprite_struct);
void create_loose(display_struct_t *sprite_struct);
void retry_after_game(basic_struct_t *window, display_struct_t *sprite_struct);
void exit_after_game(basic_struct_t *window, display_struct_t *sprite_struct);

void create_a(display_struct_t *s);

void init_face(display_struct_t *sprite_struct);
void init_face_cond3(display_struct_t *sprite_struct);
void init_face_cond2(display_struct_t *sprite_struct);
void init_face_cond1(display_struct_t *sprite_struct);

void create_attack1(basic_struct_t *window);
void create_attack2(basic_struct_t *window);
void create_attack3(basic_struct_t *window);
void create_attack4(basic_struct_t *window);
void create_attack5(basic_struct_t *window);

void create_key1(basic_struct_t *window);
void create_key2(basic_struct_t *window);
void create_key3(basic_struct_t *window);
void create_key4(basic_struct_t *window);
void create_key5(basic_struct_t *window);

void check_inventory_content(basic_struct_t *window);
void check_key(basic_struct_t *window);
void complete_inventory(basic_struct_t *window);
void create_sinventory(display_struct_t *sprite_struct);
void inventory_display(basic_struct_t *window,
display_struct_t *sprite_struct);
void create_prison(basic_struct_t *window);
void sfSprite_setPositionx(display_struct_t *s);
void Spriteset(display_struct_t *s);
void spritepos(display_struct_t *s);
void spriteposx(display_struct_t *s);

void create_all_key(basic_struct_t *window);
void create_all_attack(basic_struct_t *window);
void create_inventory(basic_struct_t *window, display_struct_t *sprite_struct);

void create_wal_fight(basic_struct_t *window, display_struct_t *sprite_struct);
void set_walts(basic_struct_t *window, display_struct_t *sprite_struct);

void click_attack1(basic_struct_t *window, display_struct_t *t);
void click_attack2(basic_struct_t *window, display_struct_t *t);
void click_attack3(basic_struct_t *window, display_struct_t *t);
void click_attack4(basic_struct_t *window, display_struct_t *t);
void click_attack5(basic_struct_t *window, display_struct_t *t);

void create_button1(basic_struct_t *window);
void create_button2(basic_struct_t *window);
void create_button3(basic_struct_t *window);
void create_button4(basic_struct_t *window);
void create_button5(basic_struct_t *window);

void create_enemy1(basic_struct_t *window);
void create_enemy2(basic_struct_t *window);
void create_enemy3(basic_struct_t *window);
void create_enemy4(basic_struct_t *window);
void create_enemy5(basic_struct_t *window);

void create_enemy_life(basic_struct_t *basic);
void create_our_life(basic_struct_t *basic);
void create_sound_a(display_struct_t *sound);
void create_hand(display_struct_t *window);

void display_button(basic_struct_t *window);
void create_all_buttons(basic_struct_t *window);
void detect_ennemy(basic_struct_t *window);
void launch_combat(basic_struct_t *window, display_struct_t *sprite_struct);
void fight(basic_struct_t *window, display_struct_t *sprite_struct);

void all_clicks_fight(basic_struct_t *window, display_struct_t *t);
void action_fight1(basic_struct_t *window);
void action_fight2(basic_struct_t *window);
void action_fight3(basic_struct_t *window);
void action_fight4(basic_struct_t *window);
void action_fight5(basic_struct_t *window);

void draw_ennemy(basic_struct_t *basic, display_struct_t *sprite_struct);
void draw_quete(display_struct_t *sprite_struct);

void displayer_a1(basic_struct_t *basic, display_struct_t *sprite_struct);
void displayer_a2(basic_struct_t *basic, display_struct_t *sprite_struct);
void detect_enemy_fight2(basic_struct_t *basic,
display_struct_t *sprite_struct);
void detect_enemy_fight(basic_struct_t *basic,
display_struct_t *sprite_struct);

void enemyinit1(display_struct_t *sprite_struct);
void enemyinit2(display_struct_t *sprite_struct);
void enemyinit3(display_struct_t *sprite_struct);
void enemyinit4(display_struct_t *sprite_struct);
void enemyinit5(display_struct_t *sprite_struct);
void display_pause(basic_struct_t *window, display_struct_t *sprite_struct);

void display_cave(basic_struct_t *basic, display_struct_t *sprite_struct);
int managbar(display_struct_t *sprite_struct);
void m_downs(display_struct_t *sprite_struct);
void m_lefts(display_struct_t *sprite_struct);
void m_rights(display_struct_t *sprite_struct);
void m_ups(display_struct_t *sprite_struct);

void display_menu(basic_struct_t *basic, display_struct_t *sprite_struct);
void managemof(basic_struct_t *basic, display_struct_t *sprite_struct);
void managemon(basic_struct_t *basic, display_struct_t *sprite_struct);
void manage30(basic_struct_t *basic, display_struct_t *sprite_struct);
void manage60(basic_struct_t *basic, display_struct_t *sprite_struct);
void mainer_supply2(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array);
void draw_score(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *number);
void claque_sound(basic_struct_t *window, display_struct_t *d);
void mainer_supply(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array);
void nb_switcher_one(basic_struct_t window, display_struct_t s, enemy_pos_t array);
void check_family(display_struct_t *sprite_struct, enemy_pos_t *array, sfVector2i mouse);
void change_life(basic_struct_t *window, display_struct_t *sprite_struct);
void create_tuto_text(display_struct_t *s);
void display_game(basic_struct_t *basic, display_struct_t *sprite_struct, enemy_pos_t *array);

#endif /* !_RPG_H_ */
