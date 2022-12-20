#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string function
 * @s: array in pointer
 * Description: prints the string in reverse order
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for(i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
