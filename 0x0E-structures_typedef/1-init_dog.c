#include "dog.h"

/**
 * init_dog - function of dog
 * @d: name of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: ownder of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
