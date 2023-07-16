#include "main.h"

/**
 * _strpbrk - the first character from 'accept' string in 's' string
 * @s: string 1
 * @accept: string 2
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
}
