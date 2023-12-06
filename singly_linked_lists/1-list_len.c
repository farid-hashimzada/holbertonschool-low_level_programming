#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of linked list
 *
 * Return: i
 */

size_t list_len(const list_t *h)
{
	const list_t *now;
	size_t i = 0;

	for (now = h; now != NULL; now = now->next)
	{
		i++;
	}
	return (i);
}
