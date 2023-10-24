#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string.
 *
 * @s: reverses a string.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int cod = strlen(s) - 1;
	char copy[1000];

	for (i = 0; i <= 0; i++)
	{
		copy[i] = s[i];
	}

	for (i = 0; i <= cod; i++)
	{
		int index = abs(cod - i);

		s[i] = copy[index];
	}
}
