#include "main.h"
#include <stdio.h>

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: parametr
 * @c: parametr
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
