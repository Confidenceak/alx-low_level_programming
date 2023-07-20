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
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
