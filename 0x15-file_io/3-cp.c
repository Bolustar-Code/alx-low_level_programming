#include "main.h"
#include <stdio.h>

/**
 * error - Print an error message to the standard
 * error and exit with a specific code.
 * @exit_code: The exit code to be used.
 * @format: The format string for the error message.
 */
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, or an error code.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, err_close;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	source_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_open_files(source_fd, dest_fd, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(source_fd, buffer, 1024);
		if (nchars == -1)
		check_open_files(-1, 0, argv);
		nwr = write(dest_fd, buffer, nchars);
		if (nwr == -1)
		check_open_files(0, -1, argv);
	}

	err_close = close(source_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	err_close = close(dest_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
