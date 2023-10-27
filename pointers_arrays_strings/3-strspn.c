#include "main.h"
#include <stdio.h>

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: parametr
 * @accept: parametr
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;
	int size = strlen(accept);

	while (s[i])
	{
		for (j = 0; j < size; j++)
		{
			if (s[i] == accept[j])
			{
				count = 1;
				break;
			}
			if (count == 0)
			{
				break;
				count = 0;
				i++;
			}
		}
	}
	return (i);
}
