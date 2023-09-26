#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the integer values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
