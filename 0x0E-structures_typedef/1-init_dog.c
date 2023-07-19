#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable type dog
 * @d: initialize the dog
 * @name: the name to be declared
 * @age: the declared age
 * @owner: the declared owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
