#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializez a structure
 * @d: pointer to dog
 * @name: address of name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
