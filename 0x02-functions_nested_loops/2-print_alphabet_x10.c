#include "main.h"

/**
 * print_alphabet_x10 - print 10 lines
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j;
	int n;

	for (j = 1; j <= 10; j++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
