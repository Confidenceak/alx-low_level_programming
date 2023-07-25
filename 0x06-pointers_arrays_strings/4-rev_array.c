#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @begin: the start of the int
 * @end: the end of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		temp = a[begin];
		a[begin] = a[end];
		a[end] = temp;
	
		begin++;
		end--;
	}
}
