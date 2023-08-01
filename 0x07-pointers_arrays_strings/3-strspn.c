#include <stdio.h>
#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string segment to search
* @accept: length of bytes to search for
* Return: number of bytes in the string s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			} else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
