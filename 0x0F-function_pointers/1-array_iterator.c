#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter on each element of an array.
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
