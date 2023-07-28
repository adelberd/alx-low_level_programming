#include <stdio.h>
#include "main.h"
/**
* _strcmp - compare two strings
* @s1: first string
* @s2: second string
* Return: 0 if the s1 and s2 match
*/

int _strcmp(char *s1, char *s2)
{
	int flag  = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			flag = 1;
		s1++;
		s2++;
	}

	if (*s1 != '\0' || *s2 != '\0')
		return (s1 - s2);

	if (flag == 0)
		return (0);
	else
		return (s1 - s2);
}

