#include <stdio.h>
#include "main.h"
/**
* _strlen - print length of a given string
* @s: string to check
* Return: integer
*/

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
