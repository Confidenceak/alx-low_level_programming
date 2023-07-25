#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: the destination of the string
 * @src: the source of the string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_tn = dest;

	while (*dest_tn != '\0')
	{
		dest_tn++;
	}

	while (*src != '\0')
	{
		*dest_tn = *src;
		dest_tn++;
		src++;
	}
	*dest_tn = '\0';
	return (dest_tn);
}
