#include "main.h"

/**
 * _strncat - concatenate two strings usig nth bytes
 * @src: the source of the nth item
 * @dest: the destination
 * @n: the nth byte
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	*d = '\0';
	return (dest);
}
