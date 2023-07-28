#include <stdio.h>

/**
 * prnt_this_first - function that print the specified message
 */
void prnt_this_first(void)__attribute__((constructor))

void prnt_this_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
