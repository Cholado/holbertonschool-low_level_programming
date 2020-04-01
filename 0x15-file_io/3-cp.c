#include "holberton.h"

/**
 * errno - print error message and exit
 * @error: error message string
 * @file: file name string
 * @exitNum: exit value number
 * Return: void
 */
void errno(char *error, char *file, int exitNum)
{
	dprintf(STDERR_FILENO, error, file);
	exit(exitNum);
}

/**
 * copy - copy source file to destination file
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: void
 */
void copy(char *file_from, char *file_to)
{
	int fd1, fd2, numofReads, numofWrites;
	char buffer[1024];
	mode_t perms;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		errno("Error: Can't read from file %s\n", file_from, 98);

	perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fd2 == -1)
		errno("Error: Can't write to %s\n", file_to, 99);

	numofReads = 1024;
	while (numofReads == 1024)
	{
		numofReads = read(fd1, buffer, 1024);
		if (numofReads == -1)
			errno("Error: Can't read from file %s\n", file_from, 98);

		numofWrites = write(fd2, buffer, numofReads);

		if (numofWrites == -1)
			errno("Error: Can't write to %s\n", file_to, 99);
	}

	if (numofReads == -1)
		errno("Error: Can't read from file %s\n", file_from, 98);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Description: copy text of file input 1 to file 2 or dprinf errno on fail
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}
