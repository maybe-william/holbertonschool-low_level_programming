#include <unistd.h>

/**
 * main - Does the stuff.
 *
 * Return: The exit status
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	fsync(STDERR_FILENO);
	return (1);
}
