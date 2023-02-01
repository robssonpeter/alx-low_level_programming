#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - the function
 * @separator: separator
 * @n: number of arguments
 * Return: void
 * Description: prints numbers with a separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*char *string[50];*/
	unsigned int x;

	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i < n - 1 && separator != NULL)
			printf("%s ", separator);
		i++;
	}
	va_end(args);
	printf("%c", '\n');
}
