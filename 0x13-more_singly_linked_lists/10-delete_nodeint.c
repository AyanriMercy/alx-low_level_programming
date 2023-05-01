#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the head node
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous, *temp;
	unsigned int i = 0;

	current = *head;
	while (index && i < index - 1)
	{
		if (current)
			current = current->next;
		else
			return (-1);
		i++;
	}
	if (!index && *head)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	if (current && current->next)
	{
		previous = current;
		temp = previous->next;
		current->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
