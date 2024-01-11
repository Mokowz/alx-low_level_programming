#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: First element
 * @n: Data
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;

	return (new);
}
