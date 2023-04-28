#include "main.h"

/**
 * _isupper -  checking for uppercase character
 *
 * @c: The chacters in ASCII code
 *
 * Return: 1 uppercase character. 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
