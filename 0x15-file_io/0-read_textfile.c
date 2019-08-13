#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - print a certain amount of chars from a file to stdout
 * @filename: the filename
 * @letters: the number of chars to print
 * Return: the amount of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc;
	ssize_t ret, wstat;
	char *stuff;

	if (!filename || !letters)
		return (0);
	desc = open(filename, O_RDONLY);
	if (desc == -1)
		return (0);
	stuff = malloc(letters);
	if (!stuff)
	{
		close(desc);
		return (0);
	}
	ret = read(desc, stuff, letters);
	close(desc);
	if (ret == 0 || ret == -1)
	{
		free(stuff);
		return (0);
	}
	wstat = write(STDOUT_FILENO, stuff, ret);
	free(stuff);
	if (wstat != ret)
		return (0);
	return ((ssize_t)wstat);
}
