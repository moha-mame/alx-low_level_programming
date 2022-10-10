#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function of dog
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
