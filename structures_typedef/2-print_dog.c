#include <stdio.h>
#include "dog.h"

/**
 * print_dog - dog print
 *
 * @d: struct dog pointer
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->owner == NULL)
		{
			d->name = "(nil)";
			d->age = 0.0;
			d->owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
