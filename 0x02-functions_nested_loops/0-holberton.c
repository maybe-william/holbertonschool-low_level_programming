#include "holberton.h"

/**
 * main - The main function
 *
 * Return: The exit status of the program.
 */
int main(void)
{
	char *h;
	int i;

	h = "Holberton\n";
	for (i = 0; i <= 9; i++)
	{
		_putchar(h[i]);
	}
	return (0);
}
