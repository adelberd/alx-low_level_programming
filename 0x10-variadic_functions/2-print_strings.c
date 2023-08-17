#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings followed by a new line.
* @separator: the string to separate the arguments
* @n: numebr fo arguments passed to the function
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
