#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: source string
 * @b: the constant byte
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
