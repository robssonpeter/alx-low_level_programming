#include "main.h"
/**
 * print_square - check the code
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int row;
	int column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
