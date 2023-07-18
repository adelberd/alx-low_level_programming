#include <stdio.h>
/**
* main - function that print the word _putchar
* Return: 0
*/

int main()
{
	char _putchar[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(_putchar[i]);
	}

	putchar('\n');
	return (0);
}
