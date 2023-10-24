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
	int len = strlen(s) - 1;
	int i;
	char copy[1000];

	for (i = 0; i <= len; i++)
	{
		copy[i] = s[i];
	}

	for (i = 0; i <= len; i++)
	{
		int index = abs(len - i);

		s[i] = copy[index];
	}
}
