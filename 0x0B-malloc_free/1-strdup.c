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

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		ptr[j] = str[j];

	ptr[len] = '\0';
	return (ptr);
}
