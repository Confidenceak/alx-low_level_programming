#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *@s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
		a++;
	{
	for (int i = a - 1; i >= 0; i--)
		_putchar (*s[i]);
	}
	_putchar('\n');
}
