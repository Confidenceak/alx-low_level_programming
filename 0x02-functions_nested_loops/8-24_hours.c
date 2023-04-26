#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: last minuite
 */
void jack_bauer(void)
{
	int d, h;

	d = 0;
	while (d < 24)
	{
		h = 0;
		while (h < 60)
		{
			_putchar((d / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((d / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar('\n');
			h++;
		}
		d++;
	}
}
