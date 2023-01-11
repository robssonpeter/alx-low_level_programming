#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function to show anewly alocated space in memory
 * @str: Pointer
 * Description: function to show anewly alocated space in memory
 * Return: Pointer of characters
 */

char *_strdup(char *str)
{
	char *location;

	if (str == NULL)
	{
		return (NULL);
	}

	location = malloc(strlen(str));

	strcpy(location, str);

	return (location);
}

