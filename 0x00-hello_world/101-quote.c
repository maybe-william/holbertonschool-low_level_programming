#include <unistd.h>

/**
 * main - Does the stuff.
 *
 * Return: The exit status
 */
int main(void)
{
	char *dora;

	dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, dora, 59);
	fsync(STDERR_FILENO);
	return (1);
}
