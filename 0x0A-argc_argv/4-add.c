#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - functiins that adds positive num
 * @argc: Argument count
 * @argv: array that contains the argument
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int a, b, result = 0;
	
	for (a = 1; a < argc; a++)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		result += atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}
