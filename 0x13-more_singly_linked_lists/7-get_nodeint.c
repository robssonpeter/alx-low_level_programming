#include "lists.h"

/**
 * get_nodeint_at_index - the function
 * @head: the pointer to the first elemnt
 * @index: index of the node to find
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int iteration;

	if (head == NULL)
		return (head);

	iteration = 0;
	current = head;
	while (current != NULL)
	{
		if (iteration == index)
			return (current);
		current = current->next;
		iteration++;
	}
	return (current);
}
