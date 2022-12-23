#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: no. of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
