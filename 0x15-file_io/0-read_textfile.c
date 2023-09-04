#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX.
* @filename: text file to read from.
* @letters: number of letters it should read and print.
*
* Return: 0 when filename is NULL or write fails otherwise actual
* number of bytes read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	r = read(op, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(op);
	return (w);
}
