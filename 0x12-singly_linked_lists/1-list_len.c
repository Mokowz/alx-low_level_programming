#include "lists.h"

/**
 * list_len - return number of elements
 * @h: Linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
