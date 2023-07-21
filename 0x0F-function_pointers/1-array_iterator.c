#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 * @array: array of integer values
 * @size: size of the array
 * @action: pointer pointing to the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
