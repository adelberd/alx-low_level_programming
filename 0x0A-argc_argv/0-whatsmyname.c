#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the name of the program and newline
* @argc: count elements in argv
* @argv: array of pointer to arguments passed to main
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(arg[0][i]);

	_putchar('\n');
	return (0);
}
