#include "main.h"

/**
 * _strstr - function used to find first occurence of string in a substring
 * @haystack: the string
 * @needle: a substring
 *
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return  (haystack);
	}
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j  == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
