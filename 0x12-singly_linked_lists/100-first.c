#include <stdio.h>

/**
 * prnt_msg - function that print the specified message
 */
void __attribute__((constructor)) prnt_msg()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
