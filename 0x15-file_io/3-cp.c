#include "main.h"

/**
 * main - Copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy of file
 */

int main(int argc, char **argv)
{
	int fl, fl2, filechecks;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fl = open(argv[1], O_RDONLY);
	if (fl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fl2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fl2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(fl, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(fl2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (filecheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fl) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fl %d\n", fl), exit(100);
	if (close(fl2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fl %d\n", fl2), exit(100);

	return (0);
}
