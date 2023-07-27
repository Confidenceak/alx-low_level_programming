#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer to the first node
 *
 * Return: 0 Always success
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
