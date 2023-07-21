#include <stdio.h>
#include "main.h"
/**
* print_diagonal - print \ character
* @n: numbers of times \ is printed
*
*/

void print_diagonal(int n)
{
	int numlines;
	int space;

	if (n > 0)
	{
		for (numlines = 0; numlines < n; numlines++)
		{
			for (space = 0; space < numlines; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
