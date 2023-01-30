#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - the function
 * @h:  pointer to struct data
 * Description: the structure pointing to another structure
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;
	/*listint_t *current;*/

	nodes = 0;

	/*current = h->next;*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);

}
