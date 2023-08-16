#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function pointer to print a name
* @name: pointer to a name to print
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	/* or f(name) */
	(*f)(name);
}
