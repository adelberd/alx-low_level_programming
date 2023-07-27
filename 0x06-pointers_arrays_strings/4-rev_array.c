#include <stdio.h>
#include "main.h"
/**
* reverse_array - reverse elements of an array
* @a: array to reverse
* @n: number of elements in an array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		/* Exchange elements, 1st and last and so on */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

