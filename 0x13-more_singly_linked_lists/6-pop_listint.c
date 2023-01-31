#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - the function
 * @head: double pointer to head
 * Description: removes the first element of a linked list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	listint_t *new_head;

	if (*head == NULL)
	{
		return (0);
	}
	h = *head;
	new_head = h->next;

	*head = new_head;

	free(h);
	return (new_head->n);
}
