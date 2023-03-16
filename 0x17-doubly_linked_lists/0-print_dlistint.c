#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - the function
 * @h: pointer to a header
 * Description: elements printer
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	
	nodes = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
