#include "main.h"

/**
 * print_numbers - function that prints the numbers
 *
 * @n: integer value
 *
 * Return: 0
 */
void print_numbers(void)

{
	int n;

	for (n >= 48 && n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
