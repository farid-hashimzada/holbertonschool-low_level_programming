#include "main.h"
#include <stdio.h>

/**
 * leet - 1337
 *@s: 1337
 *
 * Return: Always 0.
 */

char *leet(char *s) {
    char *str = s;
    while (*s) {
        if ((*s == 'a' || *s == 'A')) {
            *s = '4';
        } else if ((*s == 'e' || *s == 'E')) {
            *s = '3';
        } else if ((*s == 'o' || *s == 'O')) {
            *s = '0';
        } else if ((*s == 't' || *s == 'T')) {
            *s = '7';
        } else if ((*s == 'l' || *s == 'L')) {
            *s = '1';
        }
        s++;
    }
    return str;
}

int main(void) {
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    return (0);
}
