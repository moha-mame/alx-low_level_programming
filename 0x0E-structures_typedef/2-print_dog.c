#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function of dog
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	printf("Name: (nil)\n");
	else if (d != NULL)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
