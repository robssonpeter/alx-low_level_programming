#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - recur for characters
 * @s: pointer of characters
 * Description: recur for characters
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*(s));
	if (*(s + 1))
	{
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
