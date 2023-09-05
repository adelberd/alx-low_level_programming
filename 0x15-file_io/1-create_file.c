#include "main.h"

/**
* create_file - creates a file.
* @filename: the name of the file to be created.
* @text_content: a null terminated string to write to the file.
*
* Return: -1 filename is NULL or 1 on success.
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			len += 1;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
