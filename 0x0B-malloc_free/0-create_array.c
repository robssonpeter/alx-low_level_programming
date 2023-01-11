#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of characters
 * @size: The size of array
 * @c: The character to initialize
 * Description: create an array of characters
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *characters;
	unsigned int x;

	if (!size)
	{
		return (NULL);
	}

	characters = malloc(size);

	x = 0;
	while (x < size)
	{
		*(characters + x) = c;
		x++;
	}

	return (characters);
}

