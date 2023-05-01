#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of list
 * @num: integer to be added to the new node
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int num)
{
	listint_t *new_list_node = NULL;

	new_list_node = malloc(sizeof(listint_t));
	if (new_list_node == NULL)
	{
		printf("Error: ");
		return (NULL);
	}

	new_list_node->n = num;
	new_list_node->next = *head;
	*head = new_list_node;

	return (*head);
}
