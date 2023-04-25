#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase'
 * Retuern: always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
