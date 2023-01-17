#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory prviously allocated with
 * call to ``` malloc: malloc(old_size) ```
 * @old_size: size in bytes allocated ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer to a new mem bloc, NULL or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (nptr);

	
		for (i = 0; i < old_size; i++);
		free(ptr);
	}
	return (nptr);
}