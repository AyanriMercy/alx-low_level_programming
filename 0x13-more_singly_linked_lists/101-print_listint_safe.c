#include "lists.h"

/**
 * free_address_list - frees a listint_addr list
 * @head: a pointer to the head
 *
 * This function frees a linked list of nodes, starting from the head.
 */
void free_address_list(listint_addr *head)
{
	listint_addr *current = head;

	while (current)
	{
		listint_addr *next = current->next;

		free(current);
		current = next;
	}
}

/**
 * add_nodeaddr - Adds a new node to a linked list of addresses.
 * @head: A pointer to the head of the list.
 * @addr: The address to store in the new node.
 *
 * Return: If memory allocation fails - exit with status 98.
 *         Otherwise - a pointer to the new node.
 */
listint_addr *add_nodeaddr(listint_addr **head, const listint_t *addr)
{
	listint_addr *new_node;

	new_node = malloc(sizeof(listint_addr));
	if (new_node == NULL)
	{
		printf("Error\n");
		free_address_list(*head);
		exit(98);
	}

	new_node->address = addr;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * print_listint_safe - prints a listint_t list, even if it has a loop
 * @head: a pointer to the head of the list
 * Return: the number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_addr *addresses, *current_address;

	addresses = NULL;
	while (head)
	{
		current_address = addresses;
		while (addresses)
		{
			if (addresses->address == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_address_list(current_address);
				return (n);
			}
			addresses = addresses->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		addresses = current_address;
		add_nodeaddr(&addresses, head);
		head = head->next;
		n++;
	}
	free_address_list(addresses);
	return (n);
}
