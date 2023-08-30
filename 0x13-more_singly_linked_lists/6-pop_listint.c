#include "lists.h"

/**
* pop_listint - delete the head node of linked list.
* @head: pointer to pointer to the linked list.
*
* Return: 0 if list is empty otherwise the head node's data.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	(*head) = (*head)->next;

	return (temp->n);
}
