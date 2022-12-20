#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy  string to another
 * @dest: dest
 * @src: source
 * Description: copy string to another
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return dest;
}
