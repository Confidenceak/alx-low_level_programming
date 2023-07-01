#include "main.h"
#include <stdio.h>

/*
 * main:  _strcat
 *
 * Description: function that concatenates two strings
 *
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
