#include "main.h"
#include <limits.h>

/**
 * set_bit - the function
 * @n: pointer to an unsigned long int
 * @index: index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= CHAR_BIT * sizeof(*n))
		return (-1);

	*n |= 1UL << index;
	return (1);
}
