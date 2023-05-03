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

	while (*s != '\n')
	{
		c++;
	}
	for (a = 0; a < c; a++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[a] = rv;
	}


}
