#include "lists.h"

/**
 * get_nodeint - get the node at the nth position
 * @head: First node
 * @index: nth posi
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;

	while (temp != NULL)
	{
		if (index == count)
			return (temp);
		temp = temp->next;
		count += 1;
	}

	return (NULL);
}
