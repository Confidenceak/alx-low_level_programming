#include <stdio.h>
#include "main.h"

 /**
 * main - main function that prints multiplication
 * argc: argument count
 * argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int no1, no2, result;

	if (argc != 3)
	{
		return 1;
		
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		
		result = no1 * no2;

		printf("%d\n", result);

		return (0);
}
