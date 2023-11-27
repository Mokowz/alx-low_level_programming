#include "main.h"

/**
 * error_handling - handle every error in the main funct
 * @error_code: Error number to print
 * @message: Text content
 * @type: Type of message
 */
void error_handling(int error_code, char *message, char type, ...)
{
	va_list args;

	va_start(args, type);

	if (type == 's')
		dprintf(STDERR_FILENO, message, va_arg(args, char *));
	else if (type == 'n')
		dprintf(STDERR_FILENO, message, "");
	else if (type == 'd')
		dprintf(STDERR_FILENO, message, va_arg(args, int));
	else
		dprintf(STDERR_FILENO, "Cannot find the error\n");

	va_end(args);
	exit(error_code);
}

/**
 * main - main program
 * @ac: Number of arguments
 * @argv: Argument list
 * Return: 0
 */
int main(int ac, char *argv[])
{
	int file_to, file_from;
	ssize_t bytes_read, bytes_written;
	char *buffer[1024];

	if (ac != 3)
		error_handling(97, "Usage: cp file_from file_to\n", 'n');
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handling(98, "Error: Can't read from file %s\n", 's', argv[1]);
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
		error_handling(99, "Error: Can't write to %s\n", 's', argv[2]);

	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_handling(99, "Error: Can't write to %s\n", 's', argv[2]);
	}
	if (bytes_read == -1)
		error_handling(98, "Error: Can't read from file %s\n", 's', argv[1]);
	if (close(file_from) == -1)
		error_handling(100, "Error: Can't close fd %d\n", 'd', file_from);
	if (close(file_to) == -1)
		error_handling(100, "Error: Can't close fd %d\n", 'd', file_to);

	return (0);
}
