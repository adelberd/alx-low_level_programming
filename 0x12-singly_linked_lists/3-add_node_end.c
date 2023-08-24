#include "lists.h"

/**
* add_node_end - add new node to the end of a linked list.
* @head: head of struct node.
* @str: string to add to a node.
*
* Return: address of new element or NULL if not success.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elem, *end;
	unsigned int len = 0;
	int i;
	char *ptr_dup;

	new_elem = malloc(sizeof(list_t));
	if (!new_elem)
		return (NULL);

	ptr_dup = strdup(str);
	if (ptr_dup == NULL)
	{
		free(new_elem);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new_elem->str = ptr_dup;
	new_elem->len = len;
	new_elem->next = NULL;

	if (*head == NULL)
		*head = new_elem;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_elem;
	}
	return (*head);
}
