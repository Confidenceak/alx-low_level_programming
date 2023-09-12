#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		d->owner = malloc(strlen(owner) + 1);

		if (d->name != NULL || d->name != NULL)
		{
			strcpy(d->name, name);
			strcpy(d->owner, owner);

			d->age = age;

			return (d);
		}
		else
			{
				free(d->name);
				free(d->owner);
				free(d);
				return (NULL);
			}
	}
	else
	{
		return (NULL);
	}
}

