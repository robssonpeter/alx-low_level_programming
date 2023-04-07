#include "hash_tables.h"

/*
 * key_index - the function to return the index here
 * @key: Pointer to an unsigned char
 * @size: unsigned long int that is a size of the hash table
 * Return: unsigned long int, the index of the key
 * Description: The function to return the index of the key entered
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
