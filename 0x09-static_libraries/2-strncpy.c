#include "main.h"

/**
 * _strncpy - copies the n number of a string
 * @dest: the string destination
 * @src: the string source
 * @n: the nth number of the sring
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
