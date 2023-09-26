#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @n: number of nodes
 * @head: pointer to the first node
 *
 * Return: address of new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
