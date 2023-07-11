#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters
 * @size: size of int
 * @c: character
 *
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
		return (array);
}
