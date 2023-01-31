#include "lists.h"

/**
 * sum_listint - the function
 * @head: the first element pointer
 * Description: find the sume of all nodes
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	int total;

	h = head;
	total = 0;

	while (h != NULL)
	{
		total += h->n;
		h = h->next;
	}

	return (total);
}


