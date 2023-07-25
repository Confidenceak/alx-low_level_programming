#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string
 * @dest: the destination of the string
 * @src: the sourc of the string
 * @n: the integer value
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = ('\0');
		i++;
	}
	return (dest);
}
