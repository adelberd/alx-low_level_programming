#include <stdio.h>
#include "main.h"
/**
* _isupper - check value is uppercase letter
* @c: is a letter
* Return: 1 for uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
