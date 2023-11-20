#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog age
 * @owner: nil
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
