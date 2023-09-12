#include "dog.h"

/**
 * print_dog - a function that prints a dog's structure
 * @d: dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
