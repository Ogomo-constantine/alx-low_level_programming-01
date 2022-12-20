#include "main.h"
/**
 * swap_int - a code that swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
