#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: new dog
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *dog_copy;
	/*dog = malloc(sizeof(dog_t));
	if(dog == NULL)
		return (NULL);*/
	dog_copy = &dog;

	dog_copy->name =name;
	dog_copy->age = age;
	dog_copy->owner = owner;

	return (dog_copy);
}
