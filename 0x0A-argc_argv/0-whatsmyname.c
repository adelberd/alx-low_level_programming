#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints the name of the program and newline
* @argc: count elements in argv
* @argv: array of pointer to arguments passed to main
* Return: 0 for success
*/

int main(__attribute__((__unused__)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
