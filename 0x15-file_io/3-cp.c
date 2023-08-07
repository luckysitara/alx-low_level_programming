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
	int fd1, fd12, filecheck;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd12 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd12 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((filecheck = read(fd1, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		filecheck = write(fd12, buffer, filecheck);
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
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd12) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd12), exit(100);

	return (0);
}
