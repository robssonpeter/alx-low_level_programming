#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - the dog function
 * @d: the dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: the dog function
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*d = malloc(sizeof(d));*/

	d->name = name;
	d->age = age;
	d->owner = owner;
}
