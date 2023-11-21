#include "lists.h"

/**
 * listint_len - prints the number of nodes in the linked list
 * @h: HEader
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
