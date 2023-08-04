#include <stdio.h>
#include "main.h"
/**
* _memcpy - function that copies memory area to area dest
* @dest: memory area to copy into
* @src: memory area to copy
* @n: number of bytes to copy into
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
