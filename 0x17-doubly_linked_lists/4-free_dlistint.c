#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: Head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
