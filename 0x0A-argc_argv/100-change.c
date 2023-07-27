#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * argc: the number of arguments
 * argv: the arguments 
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int centz, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

		centz = atoi(argv[1]);

		if (centz < 0)
		{
			printf("0\n");
			return (0);
		}

		while (centz > 0)
		{
			if (centz >= 25)
				cent -= 25;
			else if (centz >= 10)
				centz -= 10;
			else if (centz >= 5)
				centz -= 5;
			else if (centz >= 2)
				centz -= 2;
			else if (centz >= 1)
				centz -= 2;
			coin++;
		}
		printf("%d\n", coin);
		return (0);
}
