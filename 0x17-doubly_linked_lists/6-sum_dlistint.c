#include "lists.h"

/**
 * sum_dlistint - sum all values in the list
 * @head: Head
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
