#include <stdio.h>
#include "main.h"
/**
* _pow_recursion - print the power of number raised to another
*		 use recursive function.
* @x: base integer value
* @y: power integer value
* Return: returns integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
