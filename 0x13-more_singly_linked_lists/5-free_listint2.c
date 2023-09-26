#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: points to the next node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_holder;

	while (*head != NULL)
	{
		temp_holder = *head;
		*head = (*head)->next;
		free(temp_holder);
	}

	*head = (NULL);
}
