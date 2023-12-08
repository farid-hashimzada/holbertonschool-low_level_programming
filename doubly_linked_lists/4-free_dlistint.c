#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of list
 *
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_data = head;
	dlistint_t *copy_data;

	while (curr_data != NULL)
	{
		copy_data = curr_data;
		curr_data = curr_data->next;
		free(copy_data);
	}
	head = NULL;
}
