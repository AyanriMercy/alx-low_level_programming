#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head)
	{
		current_node = *head;
		while (current_node)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
		*head = NULL;
	}
}
