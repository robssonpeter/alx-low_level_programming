#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Pointer to the key
 * @value: Pointer to the value
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *head;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	if (!head)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		while (head)
		{
			if (!strcmp(head->key, key))
			{
				free(head->value);
				head->value = strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			if (!head->next)
				break;
			head = head->next;
		}
		head->next = new_node;
	}

	return (1);
}
