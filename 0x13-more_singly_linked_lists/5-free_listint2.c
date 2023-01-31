#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - the function
 * @head: pointer to a pointer of the first element of the list
 * Description - Another way of freeing a linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
