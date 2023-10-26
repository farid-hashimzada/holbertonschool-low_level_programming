#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: parametr
 * @s2: parametr
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
}
