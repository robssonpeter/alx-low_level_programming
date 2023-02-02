#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
