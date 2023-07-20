#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: an array of integers
 * @cmp: a pointer to the array
 * @size: the size if the array
 *
 * Return: 1, -1 if no element match, 0 if size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	(cmp)(array[i]);

	if (array == NULL || cmp  == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
