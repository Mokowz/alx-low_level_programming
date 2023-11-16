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
	list_t *newNode = malloc(sizeof(list_t));
	list_t *p;

	p = *head;

	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (p->next != NULL)
		p = p->next;

	p->next = newNode;
	return (*head);
}
