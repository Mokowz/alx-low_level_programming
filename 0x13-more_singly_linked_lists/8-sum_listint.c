#include "lists.h"

/**
 * sum_listint - sums all data
 * @head: First node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0, n;

	if (head == NULL)
		return (sum);

	temp = head;

	while (temp != NULL)
	{
		n = temp->n;
		sum += n;
		temp = temp->next;
	}

	return (sum);
}
