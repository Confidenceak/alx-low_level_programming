#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: last minuite
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + 48); /* print 10 digit of hour */
			_putchar((h % 10) + 48); /* prints 10 digit of hours */
			_putchar(':'); /* the ':' sign between the hour and minuite */
			_putchar((m / 10) + 48); /* prints 10 digits of minuite */
			_putchar((m % 10) + 48); /* print 10 digits of minuite */
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;

	}
}
