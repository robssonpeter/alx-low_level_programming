#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** 
 * main - to infinity and beyond
 * @argc: count all parameters
 * @argv: pointer with all the parameters
 * Description: adds all the numbers
 * Return: Always (0)
 *
 */

int main (int argc, char* argv[])
{
	int sum, x;

	sum = 0;
	x = 1;

	while (x < argc)
	{
		if(isdigit(argv[x]))
		{
			sum += atoi(argv[x]);
		}
		else
		{
			printf("%s\n", "Error");
			return (0);
		}
		x++;
	}

	printf("%d\n", sum);
	return (0);
}
