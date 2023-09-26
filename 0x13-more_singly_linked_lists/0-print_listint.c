#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to the first node
 *
 * Return: number of nudes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_num++;
	}
	return (node_num);
}
