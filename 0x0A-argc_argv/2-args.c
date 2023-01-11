#include <stdio.h>

/**
 * main - print all arguments
 * @argc: count all parameters
 * @argv: pointer with all the parameters
 * Description: print all arguments
 * Return: Always (0)
 *
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}

	return (0);
}
