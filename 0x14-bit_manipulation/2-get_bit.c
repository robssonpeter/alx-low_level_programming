#include "main.h"

/**
 * get_bit - the function
 * @n: the numbe
 * @index: the index
 * Description: find index of binary
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int power;
	unsigned int x;

	power = 1;
	x = 1;
	while (x <= index && power < n)
	{
		power = power * 2;

		if (x == index && power <= n)
			return (1);
		x++;
	}

	return (0);
}
