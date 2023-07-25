#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @a: accept
 * @s: string
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char* a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
