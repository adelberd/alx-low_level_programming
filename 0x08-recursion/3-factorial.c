#include <stdio.h>
#include "main.h"
/**
* factorial - returns a factorial of a given number recursively
* @n: number to evaluate its factorial
* Return: integer factorial
*
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}


