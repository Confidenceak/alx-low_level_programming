#include "main.h"

/*
 * _puts_recursion - function that prints a string recursively
 * @s: string input
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar ('\n');
}
