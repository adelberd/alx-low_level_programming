#include <stdio.h>
/**
* main - two of two digits combinations
*
* Return: 0 when success
*/

int main(void)
{
	/* a = 1st, b = 2nd, c = 3rd and d = 4th digit in combintion*/
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = a; c < 58; c++)
			{
				/* d = b + 1 make the comb to nt repeat*/
				for (d = b + 1; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a < 57 || b < 56 || c < 57 || d < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
		}
	}
	putchar('\n);
	return (0);
}
