#include "lists.h"

/**
* list_len - get the number of elements in a linked list.
* @h: pointer a linked list of struct list_t.
*
* Return: number of elements of linked list.
*/

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
