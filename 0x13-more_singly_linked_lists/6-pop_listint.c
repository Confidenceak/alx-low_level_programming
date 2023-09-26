#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: pointer to next
 *
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_holder;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	temp_holder = *head;
	num = temp_holder->n;

	*head = (*head)->next;

	free(temp_holder);

	return (num);
}
