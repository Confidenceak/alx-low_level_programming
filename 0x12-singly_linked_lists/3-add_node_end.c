#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to be inputed the new node
 *
 * Return: if successful, address of the new element, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mynew_node;
	list_t *temp_holder = *head;
	unsigned int lent = 0;

	while (str[lent])
		lent++;

	mynew_node = (list_t *)malloc(sizeof(list_t));

	if (mynew_node == NULL)
	{
		return (NULL);
	}
	mynew_node->str = strdup(str);
	mynew_node->len = lent;
	mynew_node->next = NULL;

	if (*head == NULL)
	{
		*head = mynew_node;
		return (mynew_node);
	}
	while (temp_holder->next)
	{
		temp_holder = temp_holder->next;
	}
	temp_holder->next = mynew_node;

	return (mynew_node);
}
