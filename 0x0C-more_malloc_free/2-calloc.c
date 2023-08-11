#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements to allocate memory for.
* @size: number of bytes.
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *_memset;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_memset = malloc(size * nmemb);

	if (_memset == NULL)
		return (NULL);

	ptr = _memset;
	for (i = 0; i < size * nmemb; i++)
		ptr[i] = '\0';

	return (_memset);
}
