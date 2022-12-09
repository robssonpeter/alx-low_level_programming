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
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
