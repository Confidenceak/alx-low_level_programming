#include "main.h"

/**
 * _memset - this sets a specific value to a block of memory
 * @s: the string address to be filled
 * @b: the desired number of bytes to be changed
 * @n: number of bytes to be chhanged
 *
 * Return: new value of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
