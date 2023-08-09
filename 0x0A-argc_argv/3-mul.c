#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplies two numbers
* @argc: number of arguments.
* @argv: array of pointer to arguments from main
* Return: 0 success
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}
