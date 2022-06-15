/*
** EPITECH PROJECT, 2022
** atoi_extracted_bistringo 
** File description:
** atoi_extracted_bistringo
*/

int my_atoi(char *string)
{
    int nb = 0;
    int neg = 1;
    int i = 0;
    int result = nb * neg;

    while (string[i] == '+' || string[i] == '-') {
        if (string[i] == '-')
            neg = neg * -1;
        i = i + 1;
    }
    while (string[i] != '\0') {
        if (string[i] >= '0' && string[i] <= '9') {
            nb = nb * 10;
            nb = nb + string[i] - '0';
            i = i + 1;
        }
    }
    return (result);
}
