#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @text_content: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int flOpen, flWrite, length = 0;

	if (filename == NULL)
		return (-1);

	flOpen = open(filename, O_WRONLY | O_APPEND);

	if (flOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	flWrite = write(flOpen, text_content, length);

	if (flWrite == -1)
		return (-1);

	close(flOpen);

	return (1);
}
