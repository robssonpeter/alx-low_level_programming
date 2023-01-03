#include "main.h"
/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to a character to
 * Description: set the value of a pointer to a char
 * Return: nothing
 */

void set_string(char **s, char *to){
	*s = to;
}
