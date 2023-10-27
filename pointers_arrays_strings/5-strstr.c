#include "main.h"
#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: parametr
 * @needle: parametr
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
