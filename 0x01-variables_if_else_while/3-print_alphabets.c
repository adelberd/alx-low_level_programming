#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
		putchar(alpha[a]);
	}

	for (a = 0; a < 26; a++)
	{
		putchar(toupper(alpha[a]));
	}

	putchar('\n');
	return (0);
}
