#include "lists.h"

list_t *add_node_end(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of a list_t list
 * @str: string to be added to the new node
 * Return: pointer to the new element, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t length = 0;

	if (str == NULL)
		length = 0;

	while (str[length] != '\0')
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	current = *head;

	if (current == NULL)
		*head = new_node;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (*head);
}
