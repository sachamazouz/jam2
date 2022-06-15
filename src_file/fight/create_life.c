/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** fight
*/
#include "rpg.h"
#include "my.h"

void create_enemy_life(basic_struct_t *basic)
{
    basic->text.font = sfFont_createFromFile("Ressources/zorque.otf");
    basic->text.text = sfText_create();
    sfText_setFont(basic->text.text, basic->text.font);
    sfText_setCharacterSize(basic->text.text, 40);
    sfText_setString(basic->text.text, my_itoa(basic->enemy_life));
    sfText_setColor(basic->text.text, sfBlue);
    sfText_setPosition(basic->text.text, (sfVector2f) {1520, 230});
    create_our_life(basic);
}

void create_our_life(basic_struct_t *basic)
{
    basic->text1.font = sfFont_createFromFile("Ressources/zorque.otf");
    basic->text1.text = sfText_create();
    sfText_setFont(basic->text1.text, basic->text1.font);
    sfText_setCharacterSize(basic->text1.text, 40);
    sfText_setString(basic->text1.text, my_itoa(basic->our_life));
    sfText_setColor(basic->text1.text, sfBlue);
    sfText_setPosition(basic->text1.text, (sfVector2f) {400, 552});
}

void create_hand(display_struct_t *window)
{
    window->s_hand.posi = (sfVector2f) {1400, 160};
    window->t_hand.t = sfTexture_createFromFile("Ressources/hand.png", NULL);
    window->s_hand.rect = (sfIntRect) {0, 0, 200, 290};
    window->s_hand.s = sfSprite_create();
    sfSprite_setTexture(window->s_hand.s, window->t_hand.t, sfTrue);
    sfSprite_setTextureRect(window->s_hand.s, window->s_hand.rect);
    sfSprite_setPosition(window->s_hand.s, window->s_hand.posi);
    create_sound_a(window);
}

void create_sound_a(display_struct_t *sound)
{
    sound->sound_a1.buffer = sfSoundBuffer_createFromFile("Ressources/a1.ogg");
    sound->sound_a1.sound = sfSound_create();
    sfSound_setBuffer(sound->sound_a1.sound, sound->sound_a1.buffer);
    sound->sound_a2.buffer = sfSoundBuffer_createFromFile("Ressources/a2.ogg");
    sound->sound_a2.sound = sfSound_create();
    sfSound_setBuffer(sound->sound_a2.sound, sound->sound_a2.buffer);
    sound->sound_a3.buffer = sfSoundBuffer_createFromFile("Ressources/a3.ogg");
    sound->sound_a3.sound = sfSound_create();
    sfSound_setBuffer(sound->sound_a3.sound, sound->sound_a3.buffer);
    sound->sound_a4.buffer = sfSoundBuffer_createFromFile("Ressources/a4.ogg");
    sound->sound_a4.sound = sfSound_create();
    sfSound_setBuffer(sound->sound_a4.sound, sound->sound_a4.buffer);
}
