#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void capitalizeString(char *str) {
    int i;

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;  // ASCII kodlarını istifadə edirik: 'a' (97) - 'A' (65) = 32
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
