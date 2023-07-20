#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the name to be printed
 * @f: a pointer to the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
