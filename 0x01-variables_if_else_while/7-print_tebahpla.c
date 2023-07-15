#include <stdio.h>
#include <stdlib.h>
/**
* main - main block reverse string
* Return: 0
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 25; a >= 0; a--)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}
