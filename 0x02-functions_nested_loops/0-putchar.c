#include <stdio.h>
#include "main.h"
/**
* main - function that print the word _putchar
* Return: 0
*/

int main(void)
{
	char name[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}

	putchar('\n');
	return (0);
}
