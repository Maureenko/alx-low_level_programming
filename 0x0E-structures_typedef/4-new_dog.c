#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len1, len2;
	int i;

	len1 = 0;
	len2 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		n_dog->name[i] = name[i];
	n_dog->name[len1] = '\0';
	for (i = 0; i < len2; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[len2] = '\0';
	n_dog->age = age;
	return (n_dog);
}
