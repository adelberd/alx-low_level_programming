#include "lists.h"

/**
* print_listint - prints all the elements of a linked list.
* @h: head pointer to the first node.
*
* Return: number of linked list nodes.
*/

size_t print_listint(const listint_t *h)
{
	int count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes += 1;
	}

	return (count_nodes);
}
