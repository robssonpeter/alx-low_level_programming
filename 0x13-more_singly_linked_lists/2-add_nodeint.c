#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - the function
 * @head: pointer to a pointer to a heead
 * @n: the new value
 * Description: Adds value to the begging of the list
 * Return: listint_t variable
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	new->next = *head;
	new->n = n;

	if (new == NULL)
	{
		return (NULL);
	}

	*head = new;

	return (new);
}
