#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the nth position
 * @head: First node
 * @index: nth posi
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count += 1;
	}

	return (NULL);
}
