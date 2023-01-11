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
	int dest_l = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	       dest[dest_l + i] = src[i];
	dest[dest_l + i] = '\0';
	return (dest);
}
