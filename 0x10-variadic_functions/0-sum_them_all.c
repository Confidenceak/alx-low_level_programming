#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;

	va_start(sum, n);

	int i;
	 for (i = 0; i < n; i++)
	 {
		 for (n == 0)
			 return (0);

		 va_arg(sum, int);
	 }
}
