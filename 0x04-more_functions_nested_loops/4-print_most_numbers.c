#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * @n: ASCII Integer value
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n >= 48 && n <= 57; n++)
	{
		if (n == 50 || n == 52)
	{
		break;
	}
		else
	{
		_putchar(n + 48);
	}
	}
	_putchar('\n');
}
