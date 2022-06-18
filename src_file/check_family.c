/*
** EPITECH PROJECT, 2022
** dg
** File description:
** check_family
*/

#include "my.h"
#include "rpg.h"

void check_family(display_struct_t *sprite_struct, enemy_pos_t *array)
{
    int tour_de_boucle = 0;
    int cursor = 0;
    int haut_gauchex = sprite_struct->s_walpa.posi.x - 50;
    int haut_gauchey = sprite_struct->s_walpa.posi.y - 50;
    int bas_droitx = sprite_struct->s_walpa.posi.x + 50;
    int bas_droity = sprite_struct->s_walpa.posi.y + 50;


    printf("La souris est de coordonnée: \nx = %d\n y = %d\nhaut gauche est de coordonnée: "
    "\nx = %d\n y = %d\nbas droit est de coordonnée: \nx = %d\n y = %d\n\n",0,0,haut_gauchex,haut_gauchey,bas_droitx,bas_droity);


    return;
}