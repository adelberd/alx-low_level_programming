#include <stdio.h>
#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: first string
* @src: second string
* @n: number of src bytes to append to dest
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* Determine length of string dest */
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	/* concatenate src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}

