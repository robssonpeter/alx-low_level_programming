#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - the function
 * @head: the head item
 * @index: index we are searching for
 * Description: find the node at a certain index
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr_index;

	curr_index = 0;
	if (head == NULL)
		return (NULL);
	while (head != NULL && curr_index <= index)
	{
		if (curr_index == index)
		{
			return (head);
		}
		printf("you are getting here");
		head = head->next;
		curr_index++;
	}
	return (NULL);
}
