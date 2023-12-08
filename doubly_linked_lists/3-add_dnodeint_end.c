#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: count
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *now;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		(*head) = node;
		return (node);
	}

	now = *head;
	while (now->next != NULL)
	{
		now = now->next;
	}
	now->next = node;
	node->prev = now;

	return (now);
}
