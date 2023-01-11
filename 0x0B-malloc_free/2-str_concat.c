#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concat two string
 * @s1: Pointer
 * @s2: Pointer
 * Description: concat two string
 * Return: Pointer of characters
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int x, y, new_length;

	x = 0;
	y = strlen(s1);
	new_length = y + strlen(s2);
	concatenated = malloc(new_length);

	while (x < y)
	{
		concatenated[x] = *(s1 + x);
		x++;
	}

	x = 0;
	while (y < new_length)
	{
		concatenated[y] = *(s2 + x);
		y++;
		x++;
	}

	return (concatenated);
}

