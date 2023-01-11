#include "main.h"

/**
 * *_strncat - code that concatenate two strings
 * @dest: string to be appende upon
 * @src: string to be completed at the end of dest
 * @n: integer
 * Return: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i:]; i++)
	       dest[dest_l++] = src[i];

	return (dest);
}
