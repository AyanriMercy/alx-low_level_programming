#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @num: integer to be added to the new node
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int num)
{
	listint_t *new_list_node = NULL;
	listint_t *current_node = NULL;

	current_node = *head;
	new_list_node = malloc(sizeof(listint_t));
	if (new_list_node == NULL)
	{
		printf("Error: ");
		return (NULL);
	}

	new_list_node->n = num;
	new_list_node->next = NULL;

	if (current_node)
	{
		while (current_node->next)
			current_node = current_node->next;
	}
	if (!current_node)
	{
		*head = new_list_node;
	}
	else
	{
		current_node->next = new_list_node;
	}

	return (new_list_node);
}
