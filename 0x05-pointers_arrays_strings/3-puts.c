#include "main.h"

/**
 *  _puts - function that prints a string
 *@str:  strings
 *  Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

