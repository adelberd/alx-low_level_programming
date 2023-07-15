#include <stdio.h>
/**
* main - print possible different combinations of two digits
* print digits in ascending order.
* Return: 0 after main block finishes.
*/

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(48 + a);
				putchar(48 + b);

				if (a == 8 && b == 9)
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
