#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *@a: integer a to be swaped
 *@b: integer b to be swaped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
