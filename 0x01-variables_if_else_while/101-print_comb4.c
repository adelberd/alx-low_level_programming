#include <stdio.h>
/**
* main - print combination of three different digits (ex 123)
* Only use putchar.
* Return: 0
*/

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (a < b && a < c && b < c)
				{
					putchar(48 + a);
					putchar(48 + b);
					putchar(48 + c);

					if (a == 7 && b == 8 && c == 9)
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
	}
	return (0);
}
