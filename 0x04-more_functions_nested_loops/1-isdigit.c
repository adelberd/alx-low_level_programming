#include <stdio.h>
#include "main.h"
/**
* _isdigit - check for a digit
* @c: variable to check
* Return: 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
