#include "main.h"
#include <string.h>
/**
 * puts_half - showing the second half of the string
 * @str: the string tobe played with
 * Description: Prints the second half of the string
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = strlen(str);
	i = length/2;

	while( i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
