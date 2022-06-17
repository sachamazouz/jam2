/*
** EPITECH PROJECT, 2022
** hepaa
** File description:
** main runner
*/

#include "rpg.h"
#include "my.h"

void draw(basic_struct_t *window, display_struct_t *sprite_struct)
{
    window->posi_mouse = sfMouse_getPositionRenderWindow(window->window);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->shome.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_option.s, NULL);
    sfRenderWindow_drawText(window->window,
    sprite_struct->game_name.text, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_start.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_exit.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_tuto.s, NULL);
    exit_nb_switcher1(window, sprite_struct);
    tuto_nb_switcher(window);
    echap(window);
    start_nb_switcher1(window, sprite_struct);
    sfSprite_setPosition(sprite_struct->s_option.s, (sfVector2f) {1110, 650});
}

void destroy(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sfRenderWindow_destroy(window->window);
    sfMusic_destroy(sprite_struct->music_game.music);
    sfSound_destroy(sprite_struct->sound.sound);
    sfSoundBuffer_destroy(sprite_struct->sound.buffer);
    sfSound_destroy(sprite_struct->sound_a1.sound);
    sfSoundBuffer_destroy(sprite_struct->sound_a1.buffer);
    sfSound_destroy(sprite_struct->sound_a2.sound);
    sfSoundBuffer_destroy(sprite_struct->sound_a2.buffer);
    sfSound_destroy(sprite_struct->sound_a3.sound);
    sfSoundBuffer_destroy(sprite_struct->sound_a3.buffer);
    sfSound_destroy(sprite_struct->sound_a4.sound);
    sfSoundBuffer_destroy(sprite_struct->sound_a4.buffer);

}

void display_pause(basic_struct_t *window, display_struct_t *sprite_struct)
{
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->shome.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_homeb.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_continue.s, NULL);
    sfRenderWindow_drawSprite(window->window,
    sprite_struct->s_exit.s, NULL);
    echap(window);
    get_click_pause(window, sprite_struct);
}

void complete_struct_ennemy(enemy_pos_t *array)
{
    int value = 0;
    int cursor = 0;
    int a = 1700;
    int c = 900;

    int b = 1200;
    int d = 500;
    enemy_pos_t *posi = malloc(sizeof(posi));

    array->enemy_array = malloc(sizeof(int *) * (TICK_AMOUNT * 2 + 1));
    srand(time(0));
    while (value != TICK_AMOUNT) {
        array->enemy_array[cursor] = ((rand() % c) + 400);
        cursor++;
        array->enemy_array[cursor] = ((rand() % d) + 300);
        b = 1920;
        cursor++;
        value++;
    }
    array->stink_ball = 35;
    my_putnbr(array->enemy_array[0]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[1]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[2]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[3]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[4]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[5]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[6]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[7]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[8]);
    my_putchar('\n');
    my_putnbr(array->enemy_array[9]);
    my_putchar('\n');

    return;
}

int main(void)
{
    basic_struct_t window;
    display_struct_t sprite_struct;
    enemy_pos_t posi;

    complete_struct_ennemy(&posi);
    create_wal_fight(&window, &sprite_struct);
    create_loose(&sprite_struct);
    create_win(&sprite_struct);
    create_sound(&sprite_struct);
    create_perso(&sprite_struct, &posi);
    create_menu(&sprite_struct);
    enemyinit(&sprite_struct);
    create_sprite_struct_start_exit(&sprite_struct);
    create_sprite_struct_tuto(&sprite_struct);
    set_easy(&sprite_struct);
    create_inventory(&window, &sprite_struct);
    sprite_struct.music_game.music =
        sfMusic_createFromFile("Ressources/song.ogg");
    nb_switcher_one(window, sprite_struct, posi);
    return 0;
}
