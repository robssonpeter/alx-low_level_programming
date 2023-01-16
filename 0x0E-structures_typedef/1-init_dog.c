void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
