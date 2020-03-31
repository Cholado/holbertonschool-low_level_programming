#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Description: system calls to read input place it on a string & prints it
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* fd = File Descriptor */
	ssize_t numofReads, numofWrites;
	char *s;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		close(fd);
		return (0);
	}
	numofReads = read(fd, s, letters);
	close(fd);
	if (numofReads == -1)
	{
		free(s);
		return (0);
	}
	numofWrites = write(STDOUT_FILENO, s, numofReads);
	free(s);
	if (numofReads != numofWrites)
		return (0);
	return (numofWrites);
}
