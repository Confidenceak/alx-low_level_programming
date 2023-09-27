#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at an index
 * @head: pointer to the first node
 * @n: nth node
 * @idx: index of the node
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));


	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
