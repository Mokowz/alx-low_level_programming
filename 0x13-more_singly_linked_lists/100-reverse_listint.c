#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: First node
 *
 * Return: Address of first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
