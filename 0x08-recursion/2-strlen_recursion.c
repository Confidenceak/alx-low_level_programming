#include "main.h"

/*
 * _strlen_recursion -  returns the length of a string
 * @s: string to be measured
 *
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (0);
	}
		_strlen_recursion(s + 1);
}
