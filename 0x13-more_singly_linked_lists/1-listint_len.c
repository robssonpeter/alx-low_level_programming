#include "lists.h"

/**
 * listint_len - the function
 * @h:  pointer to struct data
 * Description: the structure pointing to another structure
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h !=  NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
