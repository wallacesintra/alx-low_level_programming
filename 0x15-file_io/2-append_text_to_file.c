#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of the file.
 * @text_content: added content.
 * Return: 1 file exists. -1 file not exist/fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, noletters, fwrite;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (noletters = 0; text_content[noletters]; noletters++)
			;

		fwrite = write(f, text_content, noletters);

		if (fwrite == -1)
			return (-1);
	}

	close(f);

	return (1);
}
