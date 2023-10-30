#include "main.h"

/**
 * create_file - function creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 success. -1 fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f, noletters, fwrite;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (noletters = 0; text_content[noletters]; noletters++)
		;

	fwrite = write(f, text_content, noletters);

	if (fwrite == -1)
		return (-1);

	close(f);

	return (1);
}
