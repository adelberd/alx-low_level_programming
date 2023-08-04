#include <stdio.h>
#include "main.h"
/**
* _memset - fills memory with a constant n byte
* @s: pointer to the memory s
* @b: amount of constant byte to fill
* @n: bytes of the memory area ponited to by s
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
