#include <stdio.h>
#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string to get a character from
* @c: character to search for in a string s
* Return: pointer to first occurence of c otherwise NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
