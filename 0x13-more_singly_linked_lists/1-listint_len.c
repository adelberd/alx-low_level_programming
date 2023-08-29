#include "lists.h"

/**
* listint_len - get the number of elements in linked list.
* @h: pointer to the struct node.
*
* Return: number of elements in a linked list.
*/

size_t listint_len(const listint_t *h)
{
	int count_elem = 0;

	while (h != NULL)
	{
		count_elem += 1;
		h = h->next;
	}

	return (count_elem);
}
