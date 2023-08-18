#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer.
* @array: array to search an integer from.
* @size: number of array elements.
* @cmp: pointer function to compare values.
* Return: the index of the first element which cmp does not return 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
