#include <stdio.h>
#include "main.h"
/**
* _strlen - get length of a string
* @str: string
* Return: length of string as integer value
*/

int _strlen(char *str)
{
	if (*str)
		return (1 + _strlen(str + 1));
	else
		return (0);
}

/**
*  find_palindrome - check if a string is palindrome
* @str: string to check
* @len: length of string
* @i: index or iterator
* Return: 1 if its a palindrome otherwise 0
*/

int find_palindrome(char *str, int len, int i)
{
	if (str[i] == str[len / 2])
		return (1);

	if (str[i] == str[len - i - 1])
		return (find_palindrome(str, len, i + 1));

	return (0);
}

/**
* is_palindrome - check if a string is a palindrome
* @s: string to check
* Return: 1 if its a palindrome
*/

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (*s == 0)
		return (1);

	return (find_palindrome(s, len, 0));
}
