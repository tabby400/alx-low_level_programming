#include "main.h"

/**
 * append_text_to_file - function which appends text at the end of a file
 *
 * @filename: points to the file to append the text to
 * @text_content: string to add at the end of the file
 *
 * Return: 1 if it is successful otherwise -1 if the file foes not exist
 * or you dont have the required permissions to write file
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int q = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (q = 0 ; text_content[q] ;)
			q++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, q);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);

}
