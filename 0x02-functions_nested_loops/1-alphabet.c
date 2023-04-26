#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
