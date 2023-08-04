#include <stdio.h>
#include "main.h"
/**
* _atoi - convert s tring to an integer
* @s: string to convert
* Return: integer
*/

int _atoi(char *s)
{
	int num = 1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			num *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	res *= num;
	return (res);
}
