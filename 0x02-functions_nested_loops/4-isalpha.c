#include "main.h"

/**
 * _isalpha - check if the letters are in uppercae or lowercase, otherwise 0
 *
 * @c: The characters in ASCII code
 *
 * Return: 1 if c is in uppercase or lowercase, else 0
 *
 */
int _isalpha(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
