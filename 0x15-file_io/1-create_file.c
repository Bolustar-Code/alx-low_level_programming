#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified
 * permissions and writes text content
 * @filename: The name of the file to create
 * @text_content: A NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created
 * written, or other errors)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result, text_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length] != '\0'; text_length++)
		continue;

		result = write(fd, text_content, text_length);
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
