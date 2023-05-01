#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to head of linked list
 * @index: Index of node to retrieve
 *
 * Return: Pointer to nth node, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int num = 0;

	node = head;
	while (node && num < index)
	{
		node = node->next;
		num++;
	}

	if (num == index && node)
		return (node);

	return (NULL);
}
