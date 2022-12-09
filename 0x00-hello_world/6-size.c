#include <stdio.h>
/**
 * main -This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 * Return: return zero
 */
int main(void)
{
	char character;
	int age;
	long long int long_int;
	long longer;
	float temp;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(age));
	printf("Size of a long int: %d byte(s)\n", sizeof(longer));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_int));
	printf("Size of a float: %d byte(s)\n", sizeof(temp));
	return (0);
}
