#include <stdio.h>
#include "main.h"
/**
* _strncpy - copy a string into another
* @dest: string to copy into
* @src: strint to be copied
* @n: number of null bytes to be copied
* Return: dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	/* Add terminating null byte when src[j] == '\0' */
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}

