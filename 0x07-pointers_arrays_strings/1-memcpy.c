#include <stdio.h>
#include <string.h>
/**
 * _memcpy - function
 * @des: Destination
 * @src: Source
 * @n: Integer
 * Description: a function that copies memory area
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n){
	char *returning = memcpy(dest, src, n);
	return (returning);
}
