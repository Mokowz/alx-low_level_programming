#include "lists.h"

/**
 * add_nodeint_end - add a node at the end
 * @head: First node
 * @n: Value
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (newNode == NULL)
		return (NULL);

	temp = *head;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
