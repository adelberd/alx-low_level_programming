#include <stdio.h>
#include <stdlib.h>
/**
* main - main block - print hexadecimal chars
* Return: 0
*/

int main(void)
{
	char alpha[] = "0123456789abcdef";
	int a;

	for (a = 0; a < 16; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}
