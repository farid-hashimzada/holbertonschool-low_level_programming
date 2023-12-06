#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: head of linked list
 * @str: string
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
