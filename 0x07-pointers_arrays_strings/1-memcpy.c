#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the memory destination of bytes
 * @src: the memory source of byte
 * @n: the number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
