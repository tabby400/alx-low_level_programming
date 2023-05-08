#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - function which reads a text file and prints it to
 *                POSIX standard output
 *
 * @filename: points to the file to be read
 * @letters: the number of lettersthat should be read and printed
 *
 * Return: if filename is NULL or the function fails, 0, otherwise
 *          w - the number of bytes read and also printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	ssize_t op;
	ssize_t r;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	r = read(op, temp, letters);
	wr = write(STDOUT_FILENO, temp, r);

	free(temp);
	close(op);
	return (wr);
}
