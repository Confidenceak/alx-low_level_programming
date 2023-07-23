#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the elements
 * @size: the size of byte
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	{
	return (ptr);
	}
}
