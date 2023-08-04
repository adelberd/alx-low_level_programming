#include <stdio.h>
#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: first string
* @src: 2nd string to add to dest string
* Return: dest string concatenated
*/

char *_strcat(char *dest, char *src)
{
	int dest_len, j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_len] = src[j];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}

