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
    "tick avoider");
    sfText_setColor(sprite_struct->game_name.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->game_name.text, (sfVector2f) {550, 10});

    sprite_struct->click_intro.font = sfFont_createFromFile("Ressources/zorque.otf");
    sprite_struct->click_intro.text = sfText_create();
    sfText_setFont(sprite_struct->click_intro.text,
    sprite_struct->click_intro.font);
    sfText_setCharacterSize(sprite_struct->click_intro.text, 25);
    sfText_setString(sprite_struct->click_intro.text, "Click on 'A' to skip introduction");
    sfText_setColor(sprite_struct->click_intro.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->click_intro.text, (sfVector2f) {100, 800});

    sprite_struct->text1.font = sfFont_createFromFile("Ressources/zorque.otf");
    sprite_struct->text1.text = sfText_create();
    sfText_setFont(sprite_struct->text1.text,
    sprite_struct->text1.font);
    sfText_setCharacterSize(sprite_struct->text1.text, 25);
    sfText_setString(sprite_struct->text1.text, "Hi! I've been stuck in the middle\n of the desert since 4 days...");
    sfText_setColor(sprite_struct->text1.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->text1.text, (sfVector2f) {1070, 200});

    sprite_struct->text2.font = sfFont_createFromFile("Ressources/zorque.otf");
    sprite_struct->text2.text = sfText_create();
    sfText_setFont(sprite_struct->text2.text,
    sprite_struct->text2.font);
    sfText_setCharacterSize(sprite_struct->text2.text, 25);
    sfText_setString(sprite_struct->text2.text, "  We arrived on a special mission, with\n 4 colleagues."
    "two have been killed by\n      some ticks family The last\n two managed"
    " to escape but \n      I can't find them anymore...");
    sfText_setColor(sprite_struct->text2.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->text2.text, (sfVector2f) {1000, 180});

    sprite_struct->text3.font = sfFont_createFromFile("Ressources/zorque.otf");
    sprite_struct->text3.text = sfText_create();
    sfText_setFont(sprite_struct->text3.text,
    sprite_struct->text3.font);
    sfText_setCharacterSize(sprite_struct->text3.text, 25);
    sfText_setString(sprite_struct->text3.text, "They just told me to left the desert \nby a green door"
    "please, help me to \nfind it or Ill probably dead in\n the worst conditions...");
    sfText_setColor(sprite_struct->text3.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(sprite_struct->text3.text, (sfVector2f) {1000, 180});

    sprite_struct->s_bulle.posi = (sfVector2f) {980, 55};
    sprite_struct->t_bulle.t = sfTexture_createFromFile("Ressources/bulle_intro.png", NULL);
    sprite_struct->s_bulle.rect = (sfIntRect) {10, 0, 605, 700};
    sprite_struct->s_bulle.s = sfSprite_create();
    sfSprite_setTexture(sprite_struct->s_bulle.s, sprite_struct->t_bulle.t, sfTrue);
    sfSprite_setTextureRect(sprite_struct->s_bulle.s, sprite_struct->s_bulle.rect);
    sfSprite_setPosition(sprite_struct->s_bulle.s, sprite_struct->s_bulle.posi);
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


    sfVector2f x = {2.5 ,2.3};
    s->t_validation.t = sfTexture_createFromFile("Ressources/validation.png", NULL);
    s->s_validation.s = sfSprite_create();
    s->s_validation.posi = (sfVector2f) {0, 0};
    sfSprite_setTexture(s->s_validation.s, s->t_validation.t, sfTrue);
    sfSprite_setPosition(s->s_validation.s,s->s_validation.posi);
    sfSprite_setScale(s->s_validation.s, x);

    s->validation.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->validation.text = sfText_create();
    sfText_setFont(s->validation.text, s->validation.font);
    sfText_setCharacterSize(s->validation.text, 80);
    sfText_setString(s->validation.text,
    "Does I deserve my jam credit catch up?\n");
    sfText_setColor(s->validation.text, sfColor_fromRGB(100, 100, 255));
    sfText_setPosition(s->validation.text, (sfVector2f) {100, 10});

    s->validation_yes.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->validation_yes.text = sfText_create();
    sfText_setFont(s->validation_yes.text, s->validation_yes.font);
    sfText_setCharacterSize(s->validation_yes.text, 80);
    sfText_setString(s->validation_yes.text,
    "YES");
    sfText_setColor(s->validation_yes.text, sfGreen);
    sfText_setPosition(s->validation_yes.text, (sfVector2f) {600, 570});

    s->validation_no.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->validation_no.text = sfText_create();
    sfText_setFont(s->validation_no.text, s->validation_no.font);
    sfText_setCharacterSize(s->validation_no.text, 80);
    sfText_setString(s->validation_no.text,
    "NO");
    sfText_setColor(s->validation_no.text, sfRed);
    sfText_setPosition(s->validation_no.text, (sfVector2f) {1300, 570});


    s->validation_yesmerci.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->validation_yesmerci.text = sfText_create();
    sfText_setFont(s->validation_yesmerci.text, s->validation_yesmerci.font);
    sfText_setCharacterSize(s->validation_yesmerci.text, 80);
    sfText_setString(s->validation_yesmerci.text,
    "MERCI BIEN LE SANG");
    sfText_setColor(s->validation_yesmerci.text, sfGreen);
    sfText_setPosition(s->validation_yesmerci.text, (sfVector2f) {600, 400});



    s->validation_nor.font = sfFont_createFromFile(
    "Ressources/zorque.otf");
    s->validation_nor.text = sfText_create();
    sfText_setFont(s->validation_nor.text, s->validation_nor.font);
    sfText_setCharacterSize(s->validation_nor.text, 60);
    sfText_setString(s->validation_nor.text,
    "MAUVAISE REPONSE, S IL VOUS PLAIT REESSAYEZ\n\n          "
    "    J'AI GALERE POUR CETTE CLOCK...");
    sfText_setColor(s->validation_nor.text, sfRed);
    sfText_setPosition(s->validation_nor.text, (sfVector2f) {300, 200});

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
