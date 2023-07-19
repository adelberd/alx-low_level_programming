#include <stdio.h>
#include "main.h"
/**
* _islower - check for lowercase character
* Return: 1 if lowercase
* @c: - c is alphabets in ascii
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
