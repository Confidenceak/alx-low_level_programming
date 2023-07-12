#include <stdlib.h>
#include "main.h"

/**
 * _concat - function that concatinate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1, len2, sumlen;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	len2 = 0;
	j = 0;
	while (s2[len2] != '\0')
	{
		len2++;
		j++;
	}

	sumlen = len1 + len2;
	result = malloc((sumlen + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';

	return (result);
}
