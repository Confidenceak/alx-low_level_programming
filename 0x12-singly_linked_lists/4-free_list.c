#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: the linke list to be free
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp_holder;

	while (head)
	{
		temp_holder = head->next;
		free(temp_holder->str);
		free(head);
		head = temp_holder;
	}
}
