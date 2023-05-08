#include "main.h"


/**
 * create_file - a function involved in creates a file
 *
 * @filename: a pointer to the file to be created
 * @text_content: points to the string to be written inside the file
 *
 * Return: 1 if successful and then -1 if function fails
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int p = 0;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (p = 0 ; text_content[p] ;)
			p++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);/* file permissions*/
	wr = write(op, text_content, p);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);

}
