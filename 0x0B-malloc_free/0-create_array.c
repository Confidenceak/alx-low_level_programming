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
	char *ptrarray;
	unsigned int i;

	ptrarray = (char *)malloc(size * sizeof(char));
	if (ptrarray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptrarray[i] = c;
	}
		return (ptrarray);
}
