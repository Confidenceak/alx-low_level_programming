#include "main.h"

/**
 * rev_string - function that reverses a string
 *@s: the input value
 * Return: 0
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int a;

	while (s[i] != '\0')
	{
		c++;
	}
	for (a = 0; a < c/2; a++)
	{
		rv = s[a];
		s[a] = s[c - 1 - a];
		s[c - 1 - a] = rv;
	}
}
