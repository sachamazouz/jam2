/*
** EPITECH PROJECT, 2022
** dg
** File description:
** check_family
*/

#include "my.h"
#include "rpg.h"

void check_family(basic_struct_t *window, display_struct_t *sprite_struct, enemy_pos_t *array, sfVector2i mouse)
{
    int tour_de_boucle = 0;
    int cursor = 0;
    int haut_gauchex = mouse.x - 50;
    int haut_gauchey = mouse.y - 50;
    int bas_droitx = mouse.x + 50;
    int bas_droity = mouse.y + 50;


    printf("La souris est de coordonnée: \nx = %d\n y = %d\nhaut gauche est de coordonnée: "
    "\nx = %d\n y = %d\nbas droit est de coordonnée: \nx = %d\n y = %d\n\n",mouse.x,mouse.y,haut_gauchex,haut_gauchey,bas_droitx,bas_droity);

    while (tour_de_boucle != FAMILY_AMOUNT) {
        if (array->enemy_array[cursor] <= bas_droitx && array->enemy_array[cursor] >= haut_gauchex &&
        array->enemy_array[cursor + 1] <= bas_droity && array->enemy_array[cursor + 1] >= haut_gauchey) {
            printf("présent\n");
            if (cursor == 0) {
                sprite_struct->s_enemy_face1.posi = (sfVector2f) {array->enemy_array[0] + 53, array->enemy_array[1]};
                sprite_struct->s_enemy1.posi = (sfVector2f) {array->enemy_array[0], array->enemy_array[1]};
                sprite_struct->s_enemy1.s = sfSprite_create();
                sprite_struct->s_enemy_face1.s = sfSprite_create();
                array->enemy_array[0] = -10000;
                array->enemy_array[1] = -10000;
                sprite_struct->detect_fight1 = 10;
                printf("ennemy1");
            }
            if (cursor == 2) {
                sprite_struct->detect_fight2 = 10;
                sprite_struct->s_enemy_face2.posi = (sfVector2f) {array->enemy_array[2] + 25, array->enemy_array[3] - 26};
                sprite_struct->s_enemy2.posi = (sfVector2f) {array->enemy_array[2], array->enemy_array[3]};
                array->enemy_array[2] = -10000;
                array->enemy_array[3] = -10000;
                printf("ennemy2");
            }
            if (cursor == 4) {
                sprite_struct->detect_fight3 = 10;
                sprite_struct->s_enemy_face3.posi = (sfVector2f) {array->enemy_array[4] + 51, array->enemy_array[5] - 15};
                sprite_struct->s_enemy3.posi = (sfVector2f) {array->enemy_array[4], array->enemy_array[5]};
                array->enemy_array[4] = -10000;
                array->enemy_array[5] = -10000;
                printf("ennemy3");
            }
            if (cursor == 6) {
                sprite_struct->detect_fight4 = 10;
                sprite_struct->s_enemy_face4.posi = (sfVector2f) {array->enemy_array[6] + 47, array->enemy_array[7] - 7};
                sprite_struct->s_enemy4.posi = (sfVector2f) {array->enemy_array[6], array->enemy_array[7]};
                array->enemy_array[6] = -10000;
                array->enemy_array[7] = -10000;
                printf("ennemy3");
            }
            return;
        }
        tour_de_boucle++;
        cursor += 2;
    }


    return;
}