#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at nth posi
 * @head:First node
 * @index: nth
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	prev = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp->next != NULL)
	{
		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i += 1;
	}

	if (i == index)
	{
		prev->next = NULL;
		free(temp);
		return (1);
	}

	return (-1);
}
