#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: Head node
 * @str: String
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t)), *p;

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	p = *head;

	while (p->next != NULL)
		p = p->next;

	p->next = newNode;

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	return (newNode);
}
