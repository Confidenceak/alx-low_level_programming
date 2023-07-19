#include "dog.h"
#include <stdlib.h>

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
	size_t n, o, i;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	d->name = malloc(sizeof(char) * n);
	if (d->name == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		d->name[i] = name[i];
	d->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	d->owner = malloc(sizeof(char) * o);
	if (d->owner == NULL)
	{
		free(d);
		free(d->owner);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		d->owner[i] = owner[i];
	return (d);
}
