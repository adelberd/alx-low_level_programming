#include <stdio.h>
#include "main.h"
/**
* print_square - print a square with a #
* Return: void
* @size: size of square
*/

int print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
