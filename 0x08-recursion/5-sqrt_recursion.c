#include <stdio.h>
#include "main.h"
/**
* get_sqrt - returns the natural square root
* @num: num to return square root of
* @r: the root to test
* Return: the natural square root
*/

int get_sqrt(int num, int r)
{
	if (r * r == num)
		return (r);

	if (r == num / 2)
		return (-1);

	return (get_sqrt(num, r + 1));
}

/**
* _sqrt_recursion - return the natural square root of integers
* @n: number to find its natural square root
* Return: natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (get_sqrt(n, 0));
}
