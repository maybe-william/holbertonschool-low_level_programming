#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - append text to an already existing file
 * @filename: the file
 * @text_content: the text to append
 * Return: 1 if successful, -1 else
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int desc, textsize;
	ssize_t wstat;

	if (!filename)
		return (-1);

	/*first call is to create file only if non-existent*/
	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc < 0)
		return (-1);

	if (!text_content || text_content[0] == '\0')
	{
		close(desc);
		return (1);
	}

	for (textsize = 0; text_content[textsize]; textsize++)
		;
	wstat = write(desc, text_content, textsize);

	close(desc);
	if (wstat != textsize)
		return (-1);
	return (1);
}
