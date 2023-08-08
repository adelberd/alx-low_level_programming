#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - returns a pointer to a new string that is a duplicate
* @str: str to duplicate.
* Return: NULL if str is null otherwise a pointer.
*/

char *_strdup(char *str)
{
	int i, j, len;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	/* count the terminating character */
	len++;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * len);

	if (ptr != NULL)
	{
		for (j = 0; str[j]; j++)
			ptr[j] = str[j];

		ptr[len] = '\0';
		return (ptr);
	}
	return (NULL);
}
