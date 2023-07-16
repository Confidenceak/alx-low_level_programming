#include "main.h"

/**
 * _strspn - the function takes two pointers to a string to analyze
 * @s: string
 * @accept: string pointing to index i
 *
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
	}
	return (0);
}
