#include "hash_tables.h"

/*
 * hash_table_print -  the function
 * @ht: the table to be iterated
 * Description: The function to iterate and print the elements of a hashtable
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if(ht->array[i]->value != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if ( i < ht->size){
				printf(", ");
			}
		}
	}
	printf("}");
}
