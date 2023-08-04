#include <stdio.h>
#include "main.h"
/**
* _strstr - locates first occurrence of a substring
* @haystack: string to search or match on
* @needle: the substring to find
* Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0'; haystack++)
	{
		char *h1 = haystack;
		char *n1 = needle;

		while (*h1 == *n1 && *n1 != '\0')
		{
			h1++;
			n1++;
		}

		if (*n1 == '\0')
			return (haystack);
	}
	return (0);
}
