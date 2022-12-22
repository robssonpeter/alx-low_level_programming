#include <string.h>
/**
 * _strncat - concatenation
 * @dest: destination
 * @src: source
 * @n: nth
 * Description: Concatenation
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
