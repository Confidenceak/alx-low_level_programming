#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char c;
	char *s;
	int i;
	double f;
	int count = 0;

	va_list list;

	va_start(list, format);

		while (format[count])
		{
			if (count > 0)
				printf(", ");

			switch (format[count])
			{
				case 'c':
					c = va_arg(list, int);
					printf("%c", c);
					break;
				case 'i':
					i = va_arg(list, int);
					printf("%d", i);
					break;
				case 'f':
					f = va_arg(list, double);
					printf("%f", f);
					break;
				case 's':
					s = va_arg(list, char*);
					if (s == NULL)
						printf("%s", s);
					break;
				default:
					break;
			}
			count++;
		}
		va_end(list);
		printf("\n");
}
