#include <stdio>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
