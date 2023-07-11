#include "search_algos.h"
#include <stdio.h>

/*
 * linear_search - function for linear searching
 * @array: Pointer to an array of integers
 * @size: size of the array
 * @value: Value to be searched
 * Return: Integer
 * Description: Function to search using linear method
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array == NULL)
		return (-1);


	iter = 0;
	while (iter < size)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
		{
			return ((int) iter);
		}
		iter++;
	}

	return (-1);
}

