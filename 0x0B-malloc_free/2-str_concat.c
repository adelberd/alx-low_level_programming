#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* str_concat - concatenates two string
* @s1: first string
* @s2: second string
* Return: a pointer to a newly allocated memory
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = 0;
	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i]; i++)
	{
		ptr[j] = s1[i];
		j = j + 1;
	}

	for (i = 0; s2[i]; i++)
	{
		ptr[j] = s2[i];
		j = j + 1;
	}
	return (ptr);
}
