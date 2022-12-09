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
	for (char x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (char x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
