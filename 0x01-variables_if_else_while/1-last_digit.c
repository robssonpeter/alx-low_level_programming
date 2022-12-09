#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * Return: return zero
 */
int main(void)
{
	int n;
	int last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_dgt = n % 10;

	if (last_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dgt);
	}
	else if (last_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dgt);
	}
	else if (last_dgt < 6 && last_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dgt);
	}
	return (0);
}
