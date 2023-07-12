#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - this returns a pointer to a newly allocated space in memory
 * * @str: string character
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	int j = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	duplicate = malloc((sizeof(char) * j) + 0);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
