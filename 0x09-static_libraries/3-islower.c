#include "main.h"

/**
 * _islower - checks for a lower character
 * @c: character
 *
 * Return: 1 if c is lower, else 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
