#include "main.h"

/**
 * swap.c - swaps the values of two integers
 *@a: integer a
 *@b: integer b
 * Return: 0
 */
void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
