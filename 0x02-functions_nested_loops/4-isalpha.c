#include <stdio.h>
#include "main.h"
/**
* _isalpha - checks whether a value is an alphabetic char
* @c: c - input to check
* Return: 1 if c is a letter (lower or upper case)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
