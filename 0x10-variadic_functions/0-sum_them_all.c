#include "variadic_functions.h"

/**
* sum_them_all - sum parameters passed to this function
* @n: number of arguments to sum
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
