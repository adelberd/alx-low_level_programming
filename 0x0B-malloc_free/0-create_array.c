#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - creates ana array of chars by using malloc.
* @size: size of memory to allocate with malloc.
* @c: character to initialize with.
* Return: pointer or NUll if it fails
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
