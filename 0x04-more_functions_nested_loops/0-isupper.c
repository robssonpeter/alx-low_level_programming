#include <ctype.h>
/**
 * _isupper - check the code.
 *
 * Return: Always 1 or 0
 */

int _isupper(char c)
{
	int is_upper = c >= 65 && c <= 90;
	return is_upper;
}
