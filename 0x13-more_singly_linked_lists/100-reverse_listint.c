#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the head node.
 *
 * Return: A pointer to the new head node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	if (*head == NULL)
		return (NULL);

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
