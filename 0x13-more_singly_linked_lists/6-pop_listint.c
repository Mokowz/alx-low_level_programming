#include "lists.h"

/**
 * pop_listint - remove the head
 * @head: First element
 *
 * Return: The value of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head  = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
