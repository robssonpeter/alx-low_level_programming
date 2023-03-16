#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - the function
 * @h: the head node
 * Description: counting the number of nodes
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
