#include "main.h"

/*
 * _strspn - Get the length of a prefix substring.
 * @s: the string to search
 * @accept: the acceptable string
 *
 * Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				break;
			a++;
		}
		if (*a == '\0')
			break;
		l++;
		s++;
	}
	return (l);
}
