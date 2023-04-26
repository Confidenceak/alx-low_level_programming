#include "main.h"

/**
 * _islower - if the input result to a lowercase, show 1 otherwise, show *0
 *
 * @c: The characters in ASCII code
 *
 * Return: 1 if character is in lowercase, else 0
 *
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

