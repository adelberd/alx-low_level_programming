#include <stdio.h>
#include "main.h"
/**
* print_rev - print a string in reverse
* @s: strint to reverse
* Return: nothing or void
*/

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Get the length of string */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--; /* Remove last character '\0' from string */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
