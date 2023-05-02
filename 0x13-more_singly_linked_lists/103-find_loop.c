#include "lists.h"

/**
 * locate_loop - Locates the node where a loop begins in a linked list
 *
 * @slow: A pointer to a node in the linked list that moves one node per
 * iteration
 * @fast: A pointer to a node in the linked list that moves two nodes per
 * iteration
 * Return: If a loop is found, the function returns a pointer to the node
 * where the loop begins. If there is no loop, the function returns NULL.
 */
listint_t *locate_loop(listint_t *slow, listint_t *fast)
{
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}


/**
 * find_listint_loop - finds loops inside lists
 * @head: pointer to head of list
 * Return: address of node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head)
	{
		slow = head->next;
		fast = head->next->next;
		while (slow && fast)
		{
			if (slow == fast)
			{
				slow = head;
				return (locate_loop(slow, fast));
			}
			slow = slow->next;
			fast = fast->next->next;
		}
	}
	return (NULL);
}
