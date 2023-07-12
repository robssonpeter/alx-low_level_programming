#include "search_algos.h"
#include <stdio.h>
/*
 * binary_search - the function
 * @array: An array of intergers
 * @size: size of the array
 * @value: the value to be searched
 * Description: Function using binary search to find an element
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;/**/
	}

	return (-1);
}
