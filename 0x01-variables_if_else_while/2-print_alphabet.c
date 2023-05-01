#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Retuern: always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++);
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
