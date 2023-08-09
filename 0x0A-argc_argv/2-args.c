#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints all arguments passed to main
* @argc: number of arguments.
* @argv: array of pointer to arguments from main
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
