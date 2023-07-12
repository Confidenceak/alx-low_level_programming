#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns a pointer to a newly allocated space in memory
 * * @str: string character
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	int str_len = 0;
	int j = 0;
	char *ps;

	while (str[str_len])
	{
		str_len++;
	}

	ps = malloc((sizeof(char) * str_len) + 1);

	if (ps == NULL)
		return (NULL);

	for (j = 0; j < str_len; j++)
	{
		ps[j] = str[j];
	}
	ps[j] = '\0';

	return (ps);
}
