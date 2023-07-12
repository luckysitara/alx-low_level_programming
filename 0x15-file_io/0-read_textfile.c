#include "main.h"

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be read
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fprnt;
	ssize_t fprntRead, fprntWrite, fprntClose;
	char *lineBuffer;

	if (filename == NULL)
		return (0);

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (-1);

	fprnt = open(filename, O_RDONLY);

	if (fprnt == -1)
		return (0);

	fprntRead = read(fprnt, lineBuffer, letters);

	if (fprntRead == -1)
		return (-1);

	fprntWrite = write(STDOUT_FILENO, lineBuffer, fprntRead);

	if (fprntWrite == -1)
		return (-1);
	fprntClose = close(fprnt);

	if (fprntClose == -1)
		return (-1);

	return (fprntRead);
}
