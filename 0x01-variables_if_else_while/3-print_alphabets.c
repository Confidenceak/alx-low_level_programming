#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase and uppercase'
 * Retuern: always 0 (success)
 */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
	{
		putchar (n);
		n++;
	}
	putchar('\n');
	return (0);
}
