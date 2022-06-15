/*my_intlen
** EPITECH PROJECT, 2021
** convert map
** File description:
** converting map
*/

#include "../../include/my.h"
#include <stdlib.h>

int my_strline(char *string)
{
    int a = 0;
    int line = 0;

    while (string[a] != '\0') {
        if (string[a] == '\n') {
            line = line + 1;
        }
        a++;
    }
    return line;
}

int my_columnbyline(char *string)
{
    int line = 0;

    while (string[line] != '\n' && string[line] != '\0') {
        line = line + 1;
        line++;
    }
    line = line + 1;
    return line;
}

char **convert_map(char *map)
{
    int nb_line = my_strline(map);
    int b = 0;
    int c = 0;
    int d = 0;
    int column = my_columnbyline(map);
    char **shell = malloc(sizeof(char *) * (nb_line + 1));

    shell[c] = malloc(sizeof(char) * (column + 1));
    for (; map[d] != '\0'; b++, d++) {
        if (map[d] == '\n') {
            shell[c][b] = map[d];
            shell[c][b + 1] = '\0';
            c = c + 1;
            shell[c] = malloc(sizeof(char) * (column + 2));
            b = -1;
        }
        shell[c][b] = map[d];
    }
    return shell;
}
