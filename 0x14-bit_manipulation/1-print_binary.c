#include "main.h"
#include <stdio.h>

/**
 * print_binary - the function
 * @n: numbers
 * Description: int to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	long unsigned int bit, power, remainder;
	int x;

	power = 1;
	bit  = 0;
	while (power < n)
	{
		if (power * 2 > n)
			break;
		power =  power * 2;
		bit ++;
	}
	remainder = n - power;
	if (n == 1)
		_putchar('1');
	else if (n == 0) 
		_putchar('0');
	else
	{
		_putchar('1');
		if (remainder == 0)
		{
			while ( bit > 0)
			{
				_putchar('0');
				bit--;
			}
		}
	}
	if (remainder > 0)
	{
		for (x = bit; x > 0; x--)
		{
			if(power > 1)
				power = (long unsigned int) power/2;
			if (power < remainder)
			{
				_putchar('1');
				remainder = remainder - power;
			}
			else if (remainder == 0)
				_putchar('0');
			else if (remainder == 1 && x == 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
