#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - change the size allocated to some pointer
 * @ptr: the pointer
 * @old_size: the old amount of bytes
 * @new_size: the new amount of bytes
 *
 * Return: the pointer to the realloc'd space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ret;
	unsigned int fill, i;

	if (!ptr)
	{
		ret = malloc(new_size);
		if (ret)
			return (ret);
		else
			return (NULL);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	fill = old_size;
	if (new_size < old_size)
		fill = new_size;

	ret = malloc(new_size);
	if (!ret)
		return (NULL);

	for (i = 0; i < fill; i++)
		((char *)ret)[i] = ((char *)ptr)[i];
	free(ptr);
	return (ret);
}
