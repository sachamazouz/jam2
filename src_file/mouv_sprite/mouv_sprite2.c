/*
** EPITECH PROJECT, 2022
** mooving sprite
** File description:
** mooving all sprite of each nb_switcher
*/
#include "rpg.h"
#include "my.h"

void mouv_rect(sfIntRect *rect, int offset, int max_value)
{
    (*rect).left = (*rect).left + offset;
    if ((*rect).left >= max_value)
        (*rect).left = 0;
}
