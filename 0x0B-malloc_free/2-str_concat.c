#include <string.h>
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
	int len1;
	int len2;
	int sum = len1 + len2;

	int i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	int j = 0;
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}

	result = malloc((sum + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (int j = 0; j < len2; j++)
        {
                result[len1 + j] = s2[j];

	return (result);
}
