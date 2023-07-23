#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the minimum integer value
 * @max: the maximum integer value
 *
 * Return: 0
 */
int *array_range(int min, int max)
{       
	int *result;
	int arr_len, i;

	if (min > max)
		return (NULL);

	arr_len = max - min + 1;

	result = (int *)malloc(arr_len * sizeof(int));
	if (result == NULL)
		return (NULL);

        for (i = 0; i < arr_len; i++)
	{
		result[i] = min + i;
	}
	return (result)
}
