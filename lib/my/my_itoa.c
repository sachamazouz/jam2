/*
** EPITECH PROJECT, 2021
** my_itoa
** File description:
** my_itoa
*/

#include <stdlib.h>

char *my_itoa(int number)
{
    int counter = 0;
    int i = number;
    char *string;

    while (i > 0) {
        i /= 10;
        counter++;
    }
    string = malloc(sizeof(4) * (counter + 1));
    string[counter] = '\0';
    while (counter-- != 0) {
        string[counter] = number % 10 + '0';
        number = number / 10;
    }
    return (string);
}
