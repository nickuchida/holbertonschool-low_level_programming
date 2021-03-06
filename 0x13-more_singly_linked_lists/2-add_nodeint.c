#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint - add node at beginning of a list
 * @head: the beginning of the list
 * @n: the node to add
 * Return: new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head || !n)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
	return (new);
}
