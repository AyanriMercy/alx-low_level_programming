#include "lists.h"

void free_list(list_t *head);

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 *
 * This function frees all the nodes in a linked list, starting from the
 * head node. It does this by iterating through the list and calling free()
 * on each node. After all the nodes are freed, the head pointer is set to
 * NULL to indicate that the list is empty.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
