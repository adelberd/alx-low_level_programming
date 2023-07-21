#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10 times 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
	int i, j, last;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
		{
			j = i;
		} else
		{
			j = 1;
		}
		_putchar(j);

		if (i >= 10)
		{
			last = i % 10;
			_putchar(last);
		}
	}
	_putchar('\n');
}
