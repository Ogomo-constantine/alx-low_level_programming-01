#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: 1st integer to swap
 * @b: 2nd integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
