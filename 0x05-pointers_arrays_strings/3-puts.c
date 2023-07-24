#include <stdio.h>
#include "main.h"
/**
* _puts - print a string foolowed by newline in stdout
* @str: string to print
* Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
