#include <stdio.h>
#include "main.h"
/**
* rev_string - reverses a string
* @s: string to reverse
* Return: nothing
*/

void rev_string(char *s)
{
	char revStr = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		revStr = s[i];
		s[i] = s[len];
		s[len] = revStr;
	}
}
