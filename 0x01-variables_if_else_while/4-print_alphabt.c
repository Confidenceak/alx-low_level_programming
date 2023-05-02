#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase except for letter e and q'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	for (n = 97; n <= 122; n++)
	{
	if (n == 101 || n == 113)
	{
		continue;
	}
	putchar(n);
	}
	putchar('\n');
	return (0);
}
