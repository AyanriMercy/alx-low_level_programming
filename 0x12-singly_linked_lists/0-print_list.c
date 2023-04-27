#include "lists.h"

size_t print_list(const list_t *h);

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer ro the head of linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		num_of_nodes += 1;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (num_of_nodes);
}
