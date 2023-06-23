#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * @c: character
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if(!(c == '2' || c == '4'))
		_putchar(c);
	}
	_putchar('\n');
}
int main(void)
{
	print_most_numbers();
	return 0;
}
