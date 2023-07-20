#include <stdio.h>
#include "main.h"
/**
* times_table - print the 9 times table starting with 0
*
*
*/

void times_table(void)
>>>>>>> 5a9df6053b7c509798a72f457541e27099d5d894
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j + i;
			if (j == 0)
				_putchar(k + '0');

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
