#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints number of arguments paased into it.
* @argc: number of args passed to main.
* @argv: array of pointer holding arguments to main.
* Return: 0 success
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
