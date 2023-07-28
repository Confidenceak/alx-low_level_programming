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
	char *s;
	int count = 0;

	va_list list;
	va_start(list, format);

		while (format[count] != '\0')
		{
			if (count > 0)
			{
				printf(", ");
			}

			switch (format[count])
			{
				case 'c':
					printf("%c", va_arg(list, int));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char*);
					if
						(s == NULL) printf("(nil)");
					else
					{
						printf("%s", s);
					}
					break;
			}
			count++;
		}
		va_end(list);
		printf("\n");
}
