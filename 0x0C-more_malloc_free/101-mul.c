#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - the function
 * @string: the string to be checked
 * Description: checks if the string is numeric
 * Return: integer
 */
int is_digit(char *string)
{
	int x;

	for (x = 0; x < (int) strlen(string); x++)
	{
		if (string[x] < 48 || string[x] > 57)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - the function
 * @argc: count arguments
 * @argv: arguments
 * Description: the function
 * Retur: zero
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
