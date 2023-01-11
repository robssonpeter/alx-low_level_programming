#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the product of two numbers
 * @argc: count all parameters
 * @argv: pointer with all the parameters
 * Description: multiplies two numbers
 * Return: Always (0)
 *
 */

int main(int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("%s\n", "Error");
	}

	(void) argc;
	return (0);
}
