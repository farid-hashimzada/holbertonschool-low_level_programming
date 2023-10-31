#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string
 * @str: A pointer to the string
 *
 * Return: The length of the string
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
	}
	return (length);
}
