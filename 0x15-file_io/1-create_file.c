#include "main.h"

/**
 * create_file - creates a file with the given name and writes the given text
 * to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	len = 0;
	while (text_content[len])
		len++;

	res = write(fd, text_content, len);
	if (res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
