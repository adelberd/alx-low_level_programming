#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: amount of memory to allocate with malloc
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
