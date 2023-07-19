#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
* return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char alphabet = 'a';

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
