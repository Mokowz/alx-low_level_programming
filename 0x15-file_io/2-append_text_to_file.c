#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: File path
 * @text_content: Content in the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_append;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	bytes_append = write(fd, text_content, strlen(text_content));
	if (bytes_append == -1)
		return (-1);
	close(fd);
	return (1);
}
