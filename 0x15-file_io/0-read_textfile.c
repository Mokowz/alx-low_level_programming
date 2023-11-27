#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: File name
 * @letters: Number of letters
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
		return (0);
	buffer[letters + 1] = '\0';
	close(fd);
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1)
		return (0);
	free(buffer);
	return (letters_read);
}
