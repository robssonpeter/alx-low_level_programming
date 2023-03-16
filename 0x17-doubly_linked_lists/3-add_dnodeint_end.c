#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_t - the function
 * @head: POinter the address of the head
 * @n: new number to be ccchanged
 * Description: function to append new entry in a list
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	/*loop througth the node to find the last node*/
	while (head != NULL)
	{
		if ((*head)->next == NULL)
			last_node = *head;
		*head = (*head)->next;
	}

	last_node->next = new_node;
	new_node->n = n;
	new_node->prev = last_node;
	new_node->next = NULL;


	return (new_node);
}
