#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *old_head;

	new_node = malloc(sizeof(dlistint_t));
	old_head = *head;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = old_head;

	old_head->prev = new_node;

	return (new_node);
}
