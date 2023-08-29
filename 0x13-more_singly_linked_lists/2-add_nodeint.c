#include "lists.h"

/**
* add_nodeint - add new node at the beginning of linked list.
* @head: pointer to pointer to the new node.
* @n: data to add.
*
* Return: address of the new element or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_beg = malloc(sizeof(listint_t));

	if (add_beg == NULL)
		return (NULL);

	add_beg->n = n;
	add_beg->next = NULL;

	add_beg->next = (*head);
	(*head) = add_beg;

	return (*head);
}
