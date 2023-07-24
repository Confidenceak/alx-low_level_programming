#include <stdio.h>

/**
 * main - function that prints the name
 * @argv: this contains the vector
 * @argc: the number of argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		putchar(argv[0][i]);
	}
	putchar('\n');
	return (0);
}
