#include <stdio.h>
#include "main.h"
/**
* _strlen_recursion - print length of a string recursively
* @s: string to evaluate
* Return: integer value i.e the length of a string
*
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else if (s == NULL)
		return (0);
}
