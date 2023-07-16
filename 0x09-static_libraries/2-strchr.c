#include "main.h"

/**
 * _strchr - searches for the first occurrence of a specified character
 * @c: character
 * @s: string
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
}
