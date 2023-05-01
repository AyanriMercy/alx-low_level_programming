#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	unsigned int sum = 0;

	current_node = head;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
