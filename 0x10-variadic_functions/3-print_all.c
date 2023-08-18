#include "variadic_functions.h"

/**
* print_all - print any type of argument passed to the function.
* @format:  the data type of argument passed to function.
*
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *_str, *sep = "";

	va_start(args, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					_str = va_arg(args, char *);
					if (!_str)
						_str = "(nil)";
					printf("%s%s", sep, _str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
	}
	printf("\n");
	va_end(args);
}
