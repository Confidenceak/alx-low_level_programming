#include "main.h"

/**
 * _strlen - this prints the lengh of a string
 * @s: the string to be printed
 *
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;


	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
