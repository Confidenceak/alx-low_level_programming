#include "main.h"
#include <string.h>

/**
 * _put - funtion used to print sting to standard output
 * @s: string
 *
 * Retuern: sting
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar ('\n');
}
