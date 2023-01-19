#include <stdlib.h>

/**
 * array_iterator - the function
 * @array: the array of ints
 * @size: the size
 * @actionn: the function pointer
 * Description: The function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
