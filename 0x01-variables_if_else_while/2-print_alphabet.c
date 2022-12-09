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
	char a = 'a';
	char z = 'z';
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
		putchar('\n');
	}
	return (0);
}

