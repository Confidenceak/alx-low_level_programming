#include "main.h"

/*
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the max number of bytes to be concatenated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* find the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append characters from src to dest up to n bytes */
	do {
		if (*src == '\0' || n <= 0)
		{
			break;
		}
		*ptr = *src;
		ptr++;
		src++;
		n--;
	} while (1);
	/* Add a terminating null bytes */
	*ptr = '\0';

	return (dest);
}
