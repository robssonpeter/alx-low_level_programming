#include "main.h"
#include "string.h"
/**
 * puts2 the function
 * @str a pointer
 * Description: Prints the characters
 * Return: void
 */
void puts2(char *str)
{
	int length;
	int i;

	length = strlen(str);
	i = 0;

	while (i < length)
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}
