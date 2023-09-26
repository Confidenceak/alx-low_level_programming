#include "lists.h"
#include "stdlib.h"

/**
 * free_listint - function that frees a list
 * @head: points to the next node
 */
void free_listint(listint_t *head)
{
	listint_t *temp_holder;

	while (!head)
	{
		temp_holder = head;
		head = head->next;
		free(temp_holder);
	}
}
