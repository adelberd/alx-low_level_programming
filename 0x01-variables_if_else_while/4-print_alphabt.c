#include <stdio.h>
#include <stdlib.h>
/**
* main - main block function
* Return: 0
*/

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int a = 26;

	for (a = 0; a < 26; a++)
	{
		if (alpha[a] != 'q' && alpha[a] != 'e')
		{
			putchar(alpha[a]);
		}
	}
	putchar('\n');
	return (0);
}
