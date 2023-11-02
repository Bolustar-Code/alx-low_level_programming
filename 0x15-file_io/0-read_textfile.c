#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print.
 *         If an error occurs or if filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t fd, er, tm;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	tm = read(fd, buf, letters);
	er = write(STDOUT_FILENO, buf, tm);

	close(fd);

	free(buf);

	return (er);
}
