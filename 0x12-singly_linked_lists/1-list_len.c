#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the no. of elements in lins_t list
 * @h: pointer of the list_t list
 * Return: no. of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

