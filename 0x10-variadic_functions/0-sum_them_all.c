#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: the cout of arguments
 * Description: sum all the parameters
 * Return: integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int total;
	va_list args;

	if (n == 0)
	{
		return (n);
	}

	total = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, unsigned int);
	}
	va_end(args);

	return (total);
}
