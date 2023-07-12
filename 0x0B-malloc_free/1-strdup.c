#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns a pointer to a newly allocated space in memory
i * * @str: string character
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	int str_len = 0;
	int j = 0;
	char *ps;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	ps = malloc((sizeof(char) * str_len) + 1);

	if (ps == NULL)
		return (NULL);

	for (j = 0; j < str_len; j++)
		ps[j] = str[j];

	ps[str_len] = '\0';

	return (ps);
}
