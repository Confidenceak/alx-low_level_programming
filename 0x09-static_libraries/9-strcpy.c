#include "main.h"

/**
 * _strcpy - function that copied a string to another
 * @dest: the destination
 * @src: the source of string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (1)
	{
		if (src[a] == '\0')
		{
			dest[a] = '\0';
			break;

		}
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
