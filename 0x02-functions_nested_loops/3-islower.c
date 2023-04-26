#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The characters in ASCII code
 *
 * Return 1 if c is lowest
 *
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

