#include "main.h"

/**
 * create_file - Creates a new file
 *
 * @filename: Param description
 *
 * @text_content: Param description
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fprnt, length = 0, fpntWrite;

	fprnt = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fprnt == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fprntWrite = write(fprnt, text_content, length);

	if (fprntWrite == -1)
	{
		return (-1);
	}
	close(fprnt);
	return (1);
}
