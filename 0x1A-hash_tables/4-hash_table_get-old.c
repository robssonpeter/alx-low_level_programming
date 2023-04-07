#include "hash_tables.h"

/*
 * hash_table_get - the function for getting the key
 * @ht: pointer to a hash table
 * @key: pointer to a char
 * Description: the function for getting the value of a key
 * Return: pointer to a char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *) key, ht->size);

	hash_node_t *node = ht->array[index];

	while (node->next != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
