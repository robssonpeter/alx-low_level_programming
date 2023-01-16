#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - dog freer
 * @d: pointer to the dog
 * Description: the function that frees the memory of the dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
