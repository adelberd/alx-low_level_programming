#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every character of a string
* @str: string to print
* Return: void
*/

void puts2(char *str)
{
	int len = 0;
	int c = 0;
	int i;
	char *char1 = str;

	while (*char1 != '\0')
	{
		len++;
		char1++;
	}

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
