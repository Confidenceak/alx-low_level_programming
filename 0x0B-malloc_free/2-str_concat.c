#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _concat - function that concatenate two srings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t sum = len1 + len2;

	char *result = (char *)malloc((sum + 1) * sizeof(char));
	if (result = NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return result;

}
