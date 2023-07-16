#include "main.h"

/**
 * _isalpha - check if the character is in uppercase
 * @c: characters
 *
 * Return: 1 if c is uppercase, else 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 121) || (c >= 65 && c <= 90));
}
