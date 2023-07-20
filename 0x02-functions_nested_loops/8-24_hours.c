#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print every minute of the day from 00:00 to 23:59
*
*
*/

void jack_bauer(void)
{
	int a, b, c, d;
	int hrs_max = 10;

	for (a = 0; a < 3; a++)
	{
		if (a == 2)
			hrs_max = 4;

		for (b = 0; b < hrs_max; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
