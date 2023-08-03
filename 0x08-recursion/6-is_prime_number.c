#include <stdio.h>
#include "main.h"
/**
* get_prime_divisor - return a prime number recursively
* @num: number to find if it is a prime number
* @i: iterator
* Return: 0 if divisible otherwise return 1
*/

int get_prime_divisor(int num, int i)
{
	if (num % i == 0 && i > 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (get_prime_divisor(num, i + 1));
}

/**
* is_prime_number - check if a number is a prime
* @n: number to evaluate on
* Return: 1 if its a prime otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (get_prime_divisor(n, 2));
}
