#include "main.h"

/**
 * *_strcat - function that concatenate 2 strings
 * @dest: string to be appended
 * @src: string to be concatenated upon
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_l = 0;

	while (dest[i++])
		dest_l++;

	for (i = 0; src[i]; i++)
		dest[dest_l++] = src[i];

	return (dest);
}
