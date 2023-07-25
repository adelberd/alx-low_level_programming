#include <stdio.h>
#include "main.h"
/**
* puts_half - print last half of a string
* @str: string to cut in half
* Return: void
*/

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	n = (len / 2);

	if ((len % 2) == 1)
		n = (len - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
