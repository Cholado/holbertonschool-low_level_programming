#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Description: system calls to create file, note: flags for if already exist
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
