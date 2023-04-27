#include "lists.h"

list_t *add_node(list_t **head, const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list_t list
 * @str: string to be added to the new node
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	if (str == NULL)
		length = 0;

	while (str[length] != '\0')
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = length;
	*head = new_node;

	return (*head);
}
