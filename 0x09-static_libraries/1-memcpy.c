#include "main.h"

/**
 * _memcpy - this function copies a memory space
 * @dest: the memory wher it is to be stored
 * @src: the memory it copies from
 * @n: the number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (int i = 0; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}
