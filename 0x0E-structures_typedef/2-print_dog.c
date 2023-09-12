#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this function prints a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name is: (nil)\n");
		else
			printf("Name is: %s\n", d->name);

		if (d->age < 0)
			printf("Age is: (nil)\n");
		else
			printf("Age is: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner is: (nil)\n");
		else
			printf("Owner is: %s\n", d->owner);
	}

}
