#include <stdio.h>
#include "main.h"
/**
* _puts_recursion - print each character of a string recursively
* @s: string
* Return: void
*
*/

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
