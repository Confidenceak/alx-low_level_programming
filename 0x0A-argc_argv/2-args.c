#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * argc: the argument count
 * argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    // Start from index 0, which is the program name itself
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}

