#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: aditional string to be added
 *
 * Return: If success, the address of the new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
	{
		 return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		  return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		 free(new_node);
		 return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
