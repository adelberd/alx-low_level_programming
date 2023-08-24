#include "lists.h"

/**
* print_list - print all elements of a list.
* @h: pointer to a linked of struct list_t..
*
* Return: number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
