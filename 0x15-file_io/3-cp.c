#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _getbuffer - gets 1024 bytes ready for a buffer
 *
 * @file: the name of the file the buffer is using
 *
 * Return: a pointer to the new buffer
 */

char *_getbuffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}
/**
 * _closefile - leads to closure of file descriptors
 *
 * @fd: the descriptor that is being closed
 */

void _closefile(int fd)
{
	int p;

	p = close(fd);

	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function which copies a file cintents to another file
 *
 * @argc: the number of arguments in the program
 * @argv: array of pointers to the arguments themselves
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int wr;
	int after;
	char *buff;
	int rd;
	int b4;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = _getbuffer(argv[2]);
	b4 = open(argv[1], O_RDONLY);
	rd = read(b4, buff, 1024);
	after = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);/*permissions*/

	do {
		if (b4 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(after, buff, rd);
		if (after == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(b4, buff, 1024);
		after = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
		free(buff);
		_closefile(b4);
		_closefile(after);

		return (0);
}

