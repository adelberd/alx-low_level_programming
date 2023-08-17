#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by a newline.
* @separator: string printed between numbers.
* @n: number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		if (separator == NULL || i == n)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	_putchar('\n');
}
