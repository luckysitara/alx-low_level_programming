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
	int f, length = 0, fWrite;

	f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fWrite = write(f, text_content, length);

	if (fWrite == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
