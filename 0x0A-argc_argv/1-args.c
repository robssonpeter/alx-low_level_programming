#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: first argument counting
 * @argv: second argument parameters
 *
 * Description: print the number of arguments passed
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
