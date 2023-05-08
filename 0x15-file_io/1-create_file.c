#include "main.h"

/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * create_file - Creates a new file and writes text to it
 * @filename: Pointer to the name of the file to create
 * @text_content: Pointer to a null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int file_descriptor;

	if (!filename)
		return (1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(file_descriptor, text_content,
				_strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (-1);
}
