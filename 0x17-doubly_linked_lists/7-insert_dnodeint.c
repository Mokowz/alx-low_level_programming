#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at index
 * @h: Head
 * @idx: Index
 * @n: New node data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;
	size_t len;

	if (idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	temp = *h;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (i == idx)
		{
			new->prev = temp->prev;
			temp->prev = new;
			temp->prev->next = new;
			new->next = temp;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
