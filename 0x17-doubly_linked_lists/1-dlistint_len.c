#include "lists.h"

/**
 * dlistint_len - return number of elements
 * @h: Header
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
