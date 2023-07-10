#include "main.h"
#include "stdlib.h"

/**
 * _array - function that creates an array of chars
 * @n: size of int
 * @c: character
 *
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char *)malloc(size * sizeof(char));

	if (array == 0)
	{	
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		array [i] = c;
	}
		return (array);
}
