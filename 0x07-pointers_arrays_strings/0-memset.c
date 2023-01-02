#include <stdio.h>
#include <string.h>
/**
 * _memset - function
 * @s: character
 * @b: second character
 * @n: integer
 * Description: A function to fill memory with a constant byte
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n){
	return (memset(s, b, n));
}
