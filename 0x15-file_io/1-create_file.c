#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - create a file and write to it
 * @filename: the filename to create
 * @text_content: the text to write to it
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int desc, textsize;
	ssize_t wstat;

	if (!filename)
		return (-1);

	/*first call is to create file only if non-existent*/
	desc = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
	if (desc < 0)
		desc = open(filename, O_RDWR | O_TRUNC);
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
