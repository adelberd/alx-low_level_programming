#include "lists.h"

/**
* get_nodeint_at_index - get the nth node of linked list.
* @head: pointer to the node of a linked list.
* @index: the index of the node to be returned.
*
* Return: a node otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count += 1;
	}

	return (NULL);
}
