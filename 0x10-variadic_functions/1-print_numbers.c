#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: numbers to be printed
 * @separator: an operator that seperates the numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		int all_num = va_arg(num, int);

		printf("%d", all_num);

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}
	va_end(num);
	printf("\n");
}
