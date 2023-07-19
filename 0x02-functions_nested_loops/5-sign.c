#include <stdio.h>
#include "main.h"
/**
* print_sign - print +, 0 or - when n is greater, equal or less
*              than zero
* @n: n - is a number
* Return: 1, 0 or -1 respectively
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
