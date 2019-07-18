#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - malloc space for the array
 * @nmemb: the number of members
 * @size: the size of each member
 *
 * Return: the pointer to malloc'd space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	ret = malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ret)[i] = 0;
	}

	return (ret);
}
