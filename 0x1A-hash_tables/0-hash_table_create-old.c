#include "hash_tables.h"

/*
 * hash_table_create - the function for creating a hash table
 * @size: this is the size of the has table
 * @return: hash_table_t struct
 * Description: A function to create a hash table in c
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	long unsigned int i;

	hash_table_t *table = calloc(size, sizeof(hash_node_t));
	table->size = size;

	for (i = 0; i < size; i++)
	{
		table->array = NULL;
	}
	return table;
}
