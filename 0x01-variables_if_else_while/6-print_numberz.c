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
	for(int x = 0; x < 10; x++)
	{
		putchar((x%10)+'0');
	}
	putchar('\n');
	return (0);
}
