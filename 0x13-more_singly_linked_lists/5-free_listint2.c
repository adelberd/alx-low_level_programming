#include "lists.h"

/**
* free_listint2 - frees a listint_t linked list.
* @head: head pointer of linked list.
*
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
