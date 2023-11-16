#include "lists.h"

/**
 * add_node - add a node to the beginning
 * @head: Poitner to the head
 * @str: New string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	*head = node;

	return (*head);
}
