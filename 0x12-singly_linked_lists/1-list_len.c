#include "lists.h"

size_t list_len(const list_t *h);

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head node of linked list
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		num_of_elements++;
	}

	return (num_of_elements);
}
