#include <stdio.h>
#include <stdlib.h>
/**
* main - main block function
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
	}
	putchar('\n');
	return (0);
}
