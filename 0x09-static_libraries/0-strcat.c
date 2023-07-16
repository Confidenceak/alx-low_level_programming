#include "main.h"

/**
 * _strcat - this concainate two strings
 * @src: the source of the string
 * @dest: the destination
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

}
