#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed(success),0(fail).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer
	ssize_t nread, nwrite;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fd);

	free(buffer);

	return (nwrite);
}
