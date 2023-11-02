#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error - Print an error message to the standard
 * error and exit with a specific code.
 * @exit_code: The exit code to be used.
 * @format: The format string for the error message.
 */
void error(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, or an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	error(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	error(99, "Error: Can't write to file %s\n", argv[2);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		error(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
	error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	error(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
	error(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
