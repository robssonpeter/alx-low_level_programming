#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - the dog printer
 * @d: the structure of the dog
 * Description: the dog printer
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
