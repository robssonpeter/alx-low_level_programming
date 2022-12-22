#include <string.h>
/**
 * _strncpy - copy
 * @dest: destination
 * @src: source
 * @n: number
 * Description: Copy string
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
