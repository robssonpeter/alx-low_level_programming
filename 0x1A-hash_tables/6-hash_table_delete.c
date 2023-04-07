#include "hash_tables.h"

/*
 * hash_table_delete - the function
 * @ht: the table to delete
 * Description: the fucntion to delete a table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht) {
	if (ht == NULL) {
		return;
	}

	for (unsigned long i = 0; i < ht->size; i++) {
		hash_node_t *node = ht->array[i];
		while (node != NULL) {
			hash_node_t *temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
