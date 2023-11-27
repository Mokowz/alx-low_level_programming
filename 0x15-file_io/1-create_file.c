#include "main.h"

/**
 * create_file - create a file
 * @filename: file path
 * @text_content: what belongs in the text
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	bytes_write = write(fd, text_content, strlen(text_content));

	if (bytes_write == -1)
		return (-1);

	close(fd);
	return (1);
}
