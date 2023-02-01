#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - the function
 * @separator: separator
 * @n: number of arguments
 * Description: prints strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		string = va_arg(args, char *);

		if (string != NULL)
			printf("%s", string);
		else
			printf("%s", "(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("%c", '\n');
}
