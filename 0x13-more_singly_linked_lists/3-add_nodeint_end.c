#include "lists.h"

/**
* add_nodeint_end - add new node at the end of a linked list.
* @head: pointer to pointer to new node.
* @n: data to add at the end of a linked list.
*
* Return: address of a new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *traverse, *add_node;

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
		*head = add_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = add_node;
	}

	return (*head);
}
