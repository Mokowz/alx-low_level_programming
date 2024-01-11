#include "lists.h"

/**
 * get_dnodeint_at_index - get node at nth index
 * @head: First element
 * @index: Index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
