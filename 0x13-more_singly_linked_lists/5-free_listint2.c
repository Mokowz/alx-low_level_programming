#include "lists.h"

/**
 * free_listint2 - free a list and set the head as null
 * @head: First node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
