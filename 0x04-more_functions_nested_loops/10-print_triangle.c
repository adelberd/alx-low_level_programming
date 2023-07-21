#include <stdio.h>
#include "main.h"
/**
* print_triangle - print a triangle
* @size: size of triangle
* Return: void
*/

void print_triangle(int size)
{
	int numlines, space, hash;

	if (size > 0)
	{
		for (numlines = 0; numlines < size; numlines++)
		{
			for (space = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < numlines + 1; hash++)
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
