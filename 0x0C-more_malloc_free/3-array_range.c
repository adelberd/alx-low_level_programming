#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range - creates an array of integers
* @min: minnimum value to be included in an array
* @max: maximum value to be included
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *arr_ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr_ptr = malloc(sizeof(int) * size);

	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr_ptr[i] = min++;

	return (arr_ptr);
}
