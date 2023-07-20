#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the last no. before the unknown list
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumup;
	unsigned int i;
	int sum = 0;

	va_start(sumup, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sumup, int);
	}
	va_end(sumup);

	return (sum);
}
