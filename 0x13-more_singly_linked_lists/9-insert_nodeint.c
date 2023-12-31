#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at nth index
 * @head: First node
 * @idx: Index of insertion
 * @n: Value of node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	prev = *head;
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (newNode);
	}

	while (temp != NULL)
	{
		if (count == idx)
		{
			newNode->next = temp;
			prev->next = newNode;
			return (newNode);
		}
		prev = temp;
		temp = temp->next;
		count += 1;
	}
	if (idx == count)
	{
		prev->next = newNode;
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
