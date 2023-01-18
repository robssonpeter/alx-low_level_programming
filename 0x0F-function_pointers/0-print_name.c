#include <stdio.h>
/**
 * print_name - the function
 * @name: the name to be printed
 * @f: pointer to a function
 * Description: The function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
