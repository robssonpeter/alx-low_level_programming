#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_noteint_end - the function
 * @head: pointer to the first element
 * @n: the new item to be added
 * Description: adds a new item to the end of the list
 * Return: Pointer to the new element that was added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	new = (listint_t *) malloc(sizeof(listint_t));
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	h = *head;
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = new;
	if (new == NULL)
		return (NULL);
	return (new);
}
