#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: ASCII character
 *
 * Return: 1 if c is a digit. Otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

