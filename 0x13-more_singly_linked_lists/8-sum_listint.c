#include "lists.h"

/**
* sum_listint - get the sum of all data of a listint_t linked list.
* @head: pointer to the first node of a linked list.
*
* Return: sum otherwise if head is empty return 0.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
