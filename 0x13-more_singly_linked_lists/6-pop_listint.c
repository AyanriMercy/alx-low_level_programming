#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list and returns its value
 * @head: double pointer to the head of the list
 * Return: the value of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val = 0;

	if (head && *head)
	{
		temp = *head;
		*head = temp->next;
		val = temp->n;
		free(temp);
	}

	return (val);
}
