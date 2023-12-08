#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: for the find
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *data;
	unsigned int n = 0;

	for (data = head; data != NULL; data = data->next)
	{
		if (n == index)
			return (data);
		n++;
	}
	return (NULL);
}
