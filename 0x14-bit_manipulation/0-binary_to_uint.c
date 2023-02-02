#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - the function
 * @b: pointer to a string
 * Description: converts the string to a normal number
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int length, x, y, digit, sum, power;
	long int base_no;
	char *character = malloc(sizeof(char));


	length = strlen(b);
	x = length - 1;
	sum = 0;

	while (x >= 0)
	{
		*character = *(b + x);
		if (*character != '0' && *character != '1')
			return (0);
		digit = atoi(character);
		/*printf("%d", digit);*/
		base_no = length - x - 1;
		power = 1;
		for (y = 1; y <= base_no; y++)
		{
			power = power * 2;
		}

		sum += digit * power;

		x -= 1;
	}
	return (sum);
}
