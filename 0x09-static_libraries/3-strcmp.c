#include "main.h"

/**
 * _strcmp - compares the value of two strings and return the difference
 * @s1: the string to be compared with s2
 * @s2: the string to be compared with s1
 *
 * Return: difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
