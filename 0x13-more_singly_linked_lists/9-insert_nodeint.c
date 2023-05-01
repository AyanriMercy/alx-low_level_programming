#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the position where the new node should be inserted
 * @n: value to be stored in the new node
 *
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		printf("Error\n");
		return (NULL);
	}
	new_node->n = n;
	current_node = *head;
	while (idx && i < idx - 1)
	{
		if (current_node)
			current_node = current_node->next;
		else
			return (NULL);
		i++;
	}
	if (!idx && !*head)
	{
		new_node->next = NULL;
	}
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
