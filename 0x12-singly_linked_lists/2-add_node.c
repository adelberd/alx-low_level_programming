#include "lists.h"

/**
* add_node - add new node to the beginning of a linked list.
* @head: head of struct node.
* @str: string to add to a node.
*
* Return: address of new element or NULL if not success.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;
	unsigned int len = 0;
	int i;
	char *ptr;

	new_elem = malloc(sizeof(list_t));
	if (!new_elem)
		return (NULL);

	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(new_elem);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new_elem->str = ptr;
	new_elem->len = len;
	new_elem->next = (*head);
	(*head) = new_elem;

	return (new_elem);
}
