#include "search_algos.h"
/**
 * jump_list - searches for an algorithm in a sorted singly
 *	linked list
 * @list: ptr to the  head of the linked list to search.
 * @size: no. of nodes in the list.
 * @value: the value to search for.
 *
 * Return: a ptr to the first node or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, ssize;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	ssize = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += ssize; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
