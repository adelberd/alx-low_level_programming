#include "lists.h"

/**
* free_listint - frees struct listint_t linked list
* @head: pointer to free.
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
