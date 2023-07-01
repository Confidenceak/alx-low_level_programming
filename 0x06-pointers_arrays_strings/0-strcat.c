#include "main.h"
#include <stdio.h>

/*
 * _strcat - function that concatenates two strings.
 * @dest: the destination of the string
 * @src: the source of the string
 * `
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	do {
		*ptr = *src;
		ptr++;
		src++;
	} while (*src != '\0');
	*ptr = '\0';
	return (dest);
}
