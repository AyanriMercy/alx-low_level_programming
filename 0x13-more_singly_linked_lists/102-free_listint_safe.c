#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if it has a loop
 * @h: pointer to the address of the head node of the list
 *
 * Return: the size of the list that was freed
 **/
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_addr *addr_list = NULL, *current_addr;
	listint_t *current_node, *next_node;

	if (h == NULL || *h == NULL)
		return (count);

	current_node = *h;
	while (current_node != NULL)
	{
		current_addr = addr_list;
		while (current_addr != NULL)
		{
			if (current_node == current_addr->address)
			{
				free_address_list(addr_list);
				*h = NULL;
				return (count);
			}
			current_addr = current_addr->next;
		}
		add_nodeaddr(&addr_list, current_node);
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
		count++;
	}
	free_address_list(addr_list);
	*h = NULL;
	return (count);
}
