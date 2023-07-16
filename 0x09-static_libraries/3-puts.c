#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: string
 *
 * Return: printed string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar('\n');
}
