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
	int x = 0;

	for (; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
