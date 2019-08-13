#include "holberton.h"

/**
 * create_file - function description
 * @filename: parameter description
 * @text_content: parameter description
 * Return: return description
 */
int create_file(const char *filename, char *text_content)
{
	int desc, textsize;
	ssize_t ret, wstat;
	char *stuff;

	if (!filename || !text_content)
		return (-1);

	/*first call is to create file only if non-existent*/
	desc = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
	if (desc < 0)
		desc = open(filename, O_RDWR | O_TRUNC);
	if (desc < 0)
		return (-1);
	if (text_content[0] == '\0')
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
