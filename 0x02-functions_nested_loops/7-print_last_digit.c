#include <stdio.h>
#include "main.h"
/**
* print_last_digit - print last digit of a number.
* @n: n - number to get last digit from
* Return: value of the last digit
*/

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	return (lastDigit);
}
