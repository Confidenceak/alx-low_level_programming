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
	va_list list;

	va_start(list, format);

		while (format[i])
		{
			if (count > 0)
				printf(", ");

			switch (format[i])
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
						printf("(nil)");
					else
						printf("%s", s);
					break;
			}
			format++;
			count++;
		}
		printf("\n");
}
