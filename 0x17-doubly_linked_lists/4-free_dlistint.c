#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head node of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current_node, *next_node;

    /* Traverse the list and free each node */
    current_node = head;
    while (current_node != NULL) {
        next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }
}
