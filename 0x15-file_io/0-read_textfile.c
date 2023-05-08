#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: maximum number of letters to read and print
 * Return: the actual number of letters it could read and print or 0 if it fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	int file_descriptor;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, sizeof(char) * letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_read = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
